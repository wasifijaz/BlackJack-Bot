# import the necessary packages
import numpy as np
import imutils
import cv2
import os

def card_loc(img):
    # load the image templates
    path = os.getcwd().replace("\\", "/")
    template = cv2.imread(f"{path}/Card3.png")
    t_temp = cv2.imread(f"{path}/top.png")
    b_temp = cv2.imread(f"{path}/bttm.png")
    w_h = cv2.imread(f"{path}/t_c.png")
    (tH, tW) = w_h.shape[:2]

    gray = img.copy()
    all_c,_,_,_ = temp_mtch(template,gray)
    # cv2.imshow("Image", all_c)
    # cv2.waitKey(0)
    
    _,sTx,sTy,Tr = temp_mtch(t_temp,all_c)
    
    _,sb1x,sb1y,b1r = temp_mtch(b_temp,all_c)
    _,sb2x,sb2y,b2r = temp_mtch(b_temp,all_c)
    tc = all_c[sTy:sTy+int(tH*Tr)-int(tH*0.46), sTx-int(tW*0.1):sTx+int(tW*Tr)]
    # cv2.imshow("Image", tc)
    # cv2.waitKey(0)
    bc1 = all_c[sb1y-int(tH*0.1):sb1y+int(tH*b1r)-int(tH*0.42), sb1x+int(tW*0.5):sb1x+int(tW*b1r)+int(tW*0.5)]
    # cv2.imshow("Image", bc1)
    # cv2.waitKey(0)
    bc2 = all_c[sb2y:sb2y+int(tH*b2r)-int(tH*0.4), sb1x+int(tW*b1r)+int(tW*0.5):sb2x+int(2*tW*b2r)+int(tW*0.5)]
    # cv2.imshow("Image", bc2)
    # cv2.waitKey(0)

    return (tc,bc1,bc2)


def temp_mtch(temp,img):
    temp = cv2.cvtColor(temp, cv2.COLOR_BGR2GRAY)
    temp = cv2.Canny(temp, 50, 200)
    (tH, tW) = temp.shape[:2]
    found = None
    for scale in np.linspace(0.2, 1.0, 20)[::-1]:
        resized = imutils.resize(img, width = int(img.shape[1] * scale))
        r = img.shape[1] / float(resized.shape[1])
        # if the resized image is smaller than the template, then break
        # from the loop
        if resized.shape[0] < tH or resized.shape[1] < tW:
            break
        # detect edges in the resized, grayscale image and apply template
        # matching to find the template in the image
        edged = cv2.Canny(resized, 50, 200)
        result = cv2.matchTemplate(edged, temp, cv2.TM_CCOEFF)
        (_, maxVal, _, maxLoc) = cv2.minMaxLoc(result)

        # if we have found a new maximum correlation value, then update
        # the bookkeeping variable
        if found is None or maxVal > found[0]:
            found = (maxVal, maxLoc, r)
        # unpack the bookkeeping variable and compute the (x, y) coordinates
        # of the bounding box based on the resized ratio
        (_, maxLoc, r) = found
        (startX, startY) = (int(maxLoc[0] * r), int(maxLoc[1] * r))
        (endX, endY) = (int((maxLoc[0] + tW) * r), int((maxLoc[1] + tH) * r))

        # draw a bounding box around the detected result and display the image
        crop = img[startY:endY, startX:endX]
        return crop,startX,startY,r
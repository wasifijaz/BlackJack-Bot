import numpy as np
import cv2
from paddleocr import PaddleOCR
# import pyautogui as pg
import time

def count_loc(gray_image):
    # Set the threshold value
    threshold_value = 128

    # Apply thresholding
    _, binary_image = cv2.threshold(gray_image, threshold_value, 255, cv2.THRESH_BINARY)
    
    # Find contours
    contours, _ = cv2.findContours(binary_image, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    # Create a blank image to draw contours on
    contour_image = np.zeros_like(binary_image)

    # Draw contours on the blank image
    cv2.drawContours(contour_image, contours, -1, (255, 255, 255), thickness=2)

    # Retrieve contour locations
    contour_locations = []
    for contour in contours:
        x, y, w, h = cv2.boundingRect(contour)
        contour_locations.append((x, y, w, h))
    loca = []
    print("Contour Locations:")
    for location in contour_locations:
        if (location[2]>=60) & (location[3]>=60):
            loca.append(location)
            # print(loca)
    return loca

# Masking Image for Yellow button
def masking_y(lower,upper,all_b):
    # Convert BGR to HSV
    hsv_image = cv2.cvtColor(all_b, cv2.COLOR_BGR2HSV)

    # Create a mask for yellow color
    yellow_mask = cv2.inRange(hsv_image, lower, upper)

    # Apply the mask to the original image
    yellow_extraction = cv2.bitwise_and(all_b, all_b, mask=yellow_mask)
    
    # Convert yellow extraction to grayscale
    gray_image = cv2.cvtColor(yellow_extraction, cv2.COLOR_BGR2GRAY)
    
    return count_loc(gray_image)

#Masking Image for red and green button
def masking_rg(lower, upper, all_b):
    selection = cv2.inRange(all_b,lower,upper)
    
    return count_loc(selection)

# Finding Location
def loc(location, abs_pos):
    fin_pos = []
    for l in location:
        rel_loc = [l[0] + l[2]/2,l[1] + l[3]/2]
        fin_pos.append([rel_loc[0] + abs_pos[0],rel_loc[1] + abs_pos[1]])
    return fin_pos




def btn_loc(nextMove,img):
    img2 = img.copy()
    if nextMove == 'Hit':
        template = cv2.imread('/home/ubuntu/API/Blackjack-Bot-jun-1-23/Buttons/Hit.png', cv2.IMREAD_GRAYSCALE)
        assert template is not None, "file could not be read, check with os.path.exists()"
    if nextMove == 'Stand':
        template = cv2.imread('/home/ubuntu/API/Blackjack-Bot-jun-1-23/Buttons/Stand.png', cv2.IMREAD_GRAYSCALE)
        assert template is not None, "file could not be read, check with os.path.exists()"
    if nextMove == 'Double':
        template = cv2.imread('/home/ubuntu/API/Blackjack-Bot-jun-1-23/Buttons/Double.png', cv2.IMREAD_GRAYSCALE)
        assert template is not None, "file could not be read, check with os.path.exists()"
    if nextMove == 'Split':
        template = cv2.imread('/home/ubuntu/API/Blackjack-Bot-jun-1-23/Buttons/Split.png', cv2.IMREAD_GRAYSCALE)
        assert template is not None, "file could not be read, check with os.path.exists()"
    if nextMove == 'Refuse':
        template = cv2.imread('/home/ubuntu/API/Blackjack-Bot-jun-1-23/Buttons/Refuse.png', cv2.IMREAD_GRAYSCALE)
        assert template is not None, "file could not be read, check with os.path.exists()"   
    if nextMove == 'Accept':
        template = cv2.imread('/home/ubuntu/API/Blackjack-Bot-jun-1-23/Buttons/Accept.png', cv2.IMREAD_GRAYSCALE)
        assert template is not None, "file could not be read, check with os.path.exists()"
    w, h = template.shape[::-1]
    method = eval('cv2.TM_CCOEFF_NORMED')

    # Apply template Matching
    res = cv2.matchTemplate(np.array(img),template,method)
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
    top_left = max_loc
    bottom_right = (top_left[0] + w, top_left[1] + h)
    center = [(top_left[0] + bottom_right[0])/2, (top_left[1] + bottom_right[1])/2]
    return center
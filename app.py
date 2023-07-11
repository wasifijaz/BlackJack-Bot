from flask import Flask, request
from bot import whichAction, checkQrow
import numpy as np
import cv2
from paddleocr import PaddleOCR
from PIL import Image
import os
import logging
from keyauth import api
import hashlib
import sys
import Bttn_loc
import C_loc
import distributecards
import sys
# import matplotlib.pyplot as plt
# import matplotlib
# matplotlib.use('Agg')

def getchecksum():
    md5_hash = hashlib.md5()
    file = open('app.py', "rb")
    md5_hash.update(file.read())
    digest = md5_hash.hexdigest()
    return digest

logging.basicConfig(filename='error.log', level=logging.DEBUG)

app = Flask(__name__)

def processImage(cropped_img):
  # Initialize the OCR reader
  ocr = PaddleOCR(use_angle_cls=True)
    
  # gray
#   gray = cv2.cvtColor(cropped_img, cv2.COLOR_BGR2GRAY)
  gray = cropped_img.copy() #ammar

  # blur
  blur = cv2.GaussianBlur(gray, (0,0), sigmaX=50, sigmaY=50)

  # divide
  divide = cv2.divide(gray, blur, scale=255)

  # otsu threshold
  thresh = cv2.threshold(divide, 0, 255, cv2.THRESH_BINARY+cv2.THRESH_OTSU)[1]

  # apply morphology
  kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (1,1))
  image_sharp = cv2.filter2D(src=thresh, ddepth=-1, kernel=kernel)
  image_sharp = cv2.cvtColor(image_sharp,cv2.COLOR_GRAY2RGB)

#   plt.imshow(image_sharp)
#   plt.show()
  
  try:
    result2 = ocr.ocr(image_sharp, det=True, rec=True, cls=True)
    # print(result2)
  except Exception as e:
    print("Error reading value")
  
#   print(result2)
  
  if len(result2[-1]) > 0:
    result2 = result2[-1][0][-1][0].split(".")
    return result2[0]
  else:
    return 'J'

@app.route('/login/<user>/<password>', methods=['GET'])
def login(user, password):
    keyauthapp = api(
        name = "USERNAME",
        ownerid = "OWNER_ID",
        secret = "YOUR_SECRET_KEY",
        version = "1.0",
        hash_to_check = getchecksum()
    )
    response = keyauthapp.login(user, password)
    if response == 200:
        print("Login Success")
        return "Login Success"
    else:
        print("Login Failed")
        return "Login Failed" 

@app.route('/test')
def test():
    return 'Hi'

@app.route('/signup/<user>/<password>/<licensekey>')
def signup(user, password, licensekey):
    keyauthapp = api(
        name = "USERNAME",
        ownerid = "OWNER_ID",
        secret = "YOUR_SECRET_KEY",
        version = "1.0",
        hash_to_check = getchecksum()
    )
    response = keyauthapp.register(user, password, licensekey)
    if response == 200:
        return "Signup Successful"
    else:
        return "Signup Failed"
    
@app.route('/BlackJackBot', methods=['POST'])
def play():
    old_stdout = sys.stdout
    log_file = open("flask.log","w")
    sys.stdout = log_file
    if 'image' not in request.files:
        return 'No file part'

    file = request.files['image']
    filename = file.filename
    file_ext = os.path.splitext(filename)[1]
    # print(file_ext)
    if file_ext.lower() not in ['.jpg', '.jpeg', '.png', '.gif']:
        return 'Invalid file type'

    img = file.read()
    with open('/home/ubuntu/API/Blackjack-Bot-jun-1-23/screenshotImages/image.png', 'wb') as f:
        f.write(img)
    # print('I am Here!')
    # Load the image
    img = Image.open("/home/ubuntu/API/Blackjack-Bot-jun-1-23/screenshotImages/image.png")
    img = cv2.cvtColor(np.array(img), cv2.COLOR_RGB2GRAY) #ammar
    # print("Image Read!")
    #reszie image
    # img = img.resize((1920,1080)) #ammar
    # Get the size of the image
    # width, height = img.size #ammar
    
    dealerCard  = 0

    t_card, b_card_1 , b_card_2 = C_loc.card_loc(img) #ammar
    # Load an image to read
    # image = cv2.imread('/home/ubuntu/API/Blackjack-Bot-jun-1-23/screenshotImages/image.png') #ammar
    # cropped_img = image[int(height*0.19):int(height*0.23), int(width*0.455):int(width*0.475)] #ammar
    # cropped_img = image[int(height*0.23):int(height*0.27), int(width*0.458):int(width*0.475)] #ammar
    # cropped_img = image[int(height*0.20):int(height*0.235), int(width*0.456):int(width*0.472)] #ammar
    # cropped_img = image[int(height*0.125):int(height*0.165), int(width*0.430):int(width*0.455)] #ammar
    # result = processImage(cropped_img) #ammar
    result = processImage(t_card) #ammar
    # print(result)
    if result.isdigit():
        dealerCard = int(result)
    else:
        if result == 'J' or result == 'K' or result == 'Q':
            dealerCard = 10
        else:
            dealerCard = 'A'
    
    if dealerCard == 'A':
        dealerCard = 11
    
    isAce = 0

    # cropped_img1 = image[int(height*0.46):int(height*0.50), int(width*0.455):int(width*0.473)] #ammar
    # cropped_img1 = image[int(height*0.48):int(height*0.52), int(width*0.458):int(width*0.475)] #ammar
    # cropped_img1 = image[int(height*0.465):int(height*0.495), int(width*0.456):int(width*0.472)] #ammar
    # cropped_img1 = image[int(height*0.440):int(height*0.475), int(width*0.430):int(width*0.455)] #ammar
    # result1 = processImage(cropped_img1) #ammar
    result1 = processImage(b_card_1) #ammar
    # print(result1)
    if result1.isdigit():
        userCard1 = int(result1)
    else:
        if result1 == 'J' or result1 == 'K' or result1 == 'Q':
            userCard1 = 10
        else:
            userCard1 = 'A'
            isAce = 1

    # cropped_img2 = image[int(height*0.46):int(height*0.50), int(width*0.475):int(width*0.495)] #ammar
    # cropped_img2 = image[int(height*0.48):int(height*0.52), int(width*0.478):int(width*0.495)] #ammar
    # cropped_img2 = image[int(height*0.465):int(height*0.495), int(width*0.477):int(width*0.494)] #ammar
    # cropped_img2 = image[int(height*0.440):int(height*0.475), int(width*0.458):int(width*0.480)] #ammar
    # result2 = processImage(cropped_img2) #ammar
    result2 = processImage(b_card_2) #ammar
    print(f'{result} {result1} {result2}')
    if result2.isdigit():
        userCard2 = int(result2)
    else:
        if result2 == 'J' or result2 == 'K' or result2 == 'Q':
            userCard2 = 10
        else:
            userCard2 = 'A'
            isAce = 1

    isSimilar = 0
    userScore = 0
    
    if userCard1 == userCard2:
        isSimilar = 1
    if dealerCard == 'A':
        dealerCard = 11
    if userCard1 == 'A' and userCard2 == 'A':
        userScore = 12
    elif userCard1 == 'A' and userCard2 != 'A':
        scenario1 = userCard2 + 11
        scenario2 = userCard2 + 1
        if scenario1 <= 21:
            userScore = scenario1
        else:
            userScore = scenario2
    elif userCard1 != 'A' and userCard2 == 'A':
        scenario1 = userCard1 + 11
        scenario2 = userCard1 + 1
        if scenario1 <= 21:
            userScore = scenario1
        else:
            userScore = scenario2
    else:
        userScore = userCard1 + userCard2
    os.remove('/home/ubuntu/API/Blackjack-Bot-jun-1-23/screenshotImages/image.png')
    if userScore == 21:
        print('Hurrah')
        return "Huurah! BlackJack..."
    elif userScore == 0:
        print('Invalid')
        return "Invalid Input Image"
    else:    
        print('Else Condition')
        print(userScore)    
        moveList = '[' + str(userScore) + ', ' + str(dealerCard) + ', ' + str(isAce) + ', ' + str(isSimilar) + ']'
        # print(moveList)
        try:
            nextMove = whichAction(checkQrow(moveList))
        except Exception:
            return "Invalid Input"
        # if nextMove == 'Hit':
        #     nextMove = (nextMove,1466,872)
        # if nextMove == 'Stand':
        #     nextMove = (nextMove,1587,888)
        # if nextMove == 'Double':
        #     nextMove = (nextMove,1336,876)
        # if nextMove == 'Split':
        #     nextMove = (nextMove,None,None)
        if nextMove == 'Hit':
            loc = Bttn_loc.btn_loc(nextMove,img)
            nextMove = (nextMove,loc[0],loc[1])
        if nextMove == 'Stand':
            loc = Bttn_loc.btn_loc(nextMove,img)
            nextMove = (nextMove,loc[0],loc[1])
        if nextMove == 'Double':
            loc = Bttn_loc.btn_loc(nextMove,img)
            nextMove = (nextMove,loc[0],loc[1])
        if nextMove == 'Split':
            loc = Bttn_loc.btn_loc(nextMove,img)
            nextMove = (nextMove,loc[0],loc[1])
        print(nextMove)
        # cv2.rectangle(
        # img,
        # (int(loc[0]), int(loc[1])),
        # (int(loc[0]) + 65, int(loc[1]) + 65),
        # (0, 255, 255),
        # -1
        # )
        # # display screenshot in a window
        # cv2.imshow('Screenshot', img)

        # # escape condition
        # cv2.waitKey(0)

        # # clean up windows
        # cv2.destroyAllWindows()
        sys.stdout = old_stdout
        log_file.close()
        return str(nextMove)
    print('No Condition')


@app.route('/distributecards', methods=['POST'])
def loc():
    if 'image' not in request.files:
        return 'No file part'

    file = request.files['image']
    filename = file.filename
    file_ext = os.path.splitext(filename)[1]
    if file_ext.lower() not in ['.jpg', '.jpeg', '.png', '.gif']:
        return 'Invalid file type'

    path = os.getcwd().replace("\\", "/")
    
    img = file.read()
    with open(f'{path}/screenshotImages/image.png', 'wb') as f:
        f.write(img)

    # Load the image
    img = Image.open(f'{path}/screenshotImages/image.png')
    img = cv2.cvtColor(np.array(img), cv2.COLOR_RGB2GRAY)
    os.remove(f'{path}/screenshotImages/image.png')
    xy_cord = distributecards.btn_loc('Distribuisci',img)
    distBtn = (str(xy_cord[0]), str(xy_cord[1]))
    return str(distBtn)

if __name__ == '__main__':
    app.run()

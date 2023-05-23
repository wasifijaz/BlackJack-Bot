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
  gray = cv2.cvtColor(cropped_img, cv2.COLOR_BGR2GRAY)

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

  result2 = ocr.ocr(image_sharp, det=True, rec=True, cls=True)

  if len(result2[-1]) > 0:
    result2 = result2[-1][0][-1][0].split(".")
    return result2[0]
  else:
    return 'J'

@app.route('/login/<user>/<password>')
def login(user, password):
    keyauthapp = api(
        name = "BLACKJACK AI",
        ownerid = "1M0KDtgoMO",
        secret = "85c75cdd548a9a82b836e518d3b341186e703b08d338018f5a3de405ec677a0f",
        version = "1.0",
        hash_to_check = getchecksum()
    )
    response = keyauthapp.login(user, password)
    if response == 200:
        return "Login Success"
    else:
        return "Login Failed" 

@app.route('/test')
def test():
    return 'Hi'

@app.route('/signup/<user>/<password>/<licensekey>')
def signup(user, password, licensekey):
    keyauthapp = api(
        name = "BLACKJACK AI",
        ownerid = "1M0KDtgoMO",
        secret = "85c75cdd548a9a82b836e518d3b341186e703b08d338018f5a3de405ec677a0f",
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
    if 'image' not in request.files:
        return 'No file part'

    file = request.files['image']
    filename = file.filename
    file_ext = os.path.splitext(filename)[1]
    if file_ext.lower() not in ['.jpg', '.jpeg', '.png', '.gif']:
        return 'Invalid file type'

    img = file.read()
    with open('/home/ubuntu/Blackjack-Bot/screenshotImages/image.png', 'wb') as f:
        f.write(img)

    # Load the image
    img = Image.open("/home/ubuntu/Blackjack-Bot/screenshotImages/image.png")
    #reszie image
    # img = img.resize((1920,1080))
    # Get the size of the image
    width, height = img.size
    
    dealerCard  = 0

    # Load an image to read
    image = cv2.imread('/home/ubuntu/Blackjack-Bot/screenshotImages/image.png')
    cropped_img = image[int(height*0.19):int(height*0.23), int(width*0.455):int(width*0.475)]
    result = processImage(cropped_img)
    if result.isdigit():
        dealerCard = int(result)
    else:
        if result == 'J' or result == 'K' or result == 'Q':
            dealerCard = 10
        else:
            dealerCard = 'A'
    
    isAce = 0

    cropped_img1 = image[int(height*0.46):int(height*0.50), int(width*0.455):int(width*0.473)]
    result1 = processImage(cropped_img1)
    if result1.isdigit():
        userCard1 = int(result1)
    else:
        if result1 == 'J' or result1 == 'K' or result1 == 'Q':
            userCard1 = 10
        else:
            userCard1 = 'A'
            isAce = 1

    cropped_img2 = image[int(height*0.46):int(height*0.50), int(width*0.475):int(width*0.495)]
    result2 = processImage(cropped_img2)
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
    os.remove('/home/ubuntu/Blackjack-Bot/screenshotImages/image.png')
    if userScore == 21:
        return "Huurah! BlackJack..."
    elif userScore == 0:
        return "Invalid Input Image"
    else:        
        moveList = '[' + str(userScore) + ', ' + str(dealerCard) + ', ' + str(isAce) + ', ' + str(isSimilar) + ']'
        nextMove = whichAction(checkQrow(moveList))
        return nextMove


if __name__ == '__main__':
    app.run()

import cv2
from paddleocr import PaddleOCR
from PIL import Image
import matplotlib.pyplot as plt

# Load the image
img = Image.open("/home/ubuntu/Blackjack-Bot/screenshotImages/test3.png")
# Get the size of the image
width, height = img.size

# Initialize the OCR reader
ocr = PaddleOCR(use_angle_cls=True)

# Load an image to read
image = cv2.imread('/home/ubuntu/Blackjack-Bot/screenshotImages/test3.png')
cropped_img1 = image[int(height*0.485):int(height*0.52), int(width*0.465):int(width*0.49)]

gray1 = cv2.cvtColor(cropped_img1, cv2.COLOR_BGR2GRAY)

# blur
blur1 = cv2.GaussianBlur(gray1, (0,0), sigmaX=50, sigmaY=50)

# divide
divide1 = cv2.divide(gray1, blur1, scale=255)

# otsu threshold
thresh1 = cv2.threshold(divide1, 0, 255, cv2.THRESH_BINARY+cv2.THRESH_OTSU)[1]

# apply morphology
kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (1,1))
image_sharp1 = cv2.filter2D(src=thresh1, ddepth=-1, kernel=kernel)
image_sharp1 = cv2.cvtColor(image_sharp1,cv2.COLOR_GRAY2RGB)
plt.imshow(image_sharp1)
plt.show()

# cv2.imwrite("/content/newTest1.png",cropped_img)
# Perform OCR on the image
result1 = ocr.ocr(image_sharp1, det=True, rec=True, cls=True)
if len(result1[-1]) > 0:
  result1 = result1[-1][0][-1][0].split(".")
  print(result1[0])
else:
  print('J')



cropped_img2 = image[int(height*0.485):int(height*0.52), int(width*0.49):int(width*0.515)]

gray2 = cv2.cvtColor(cropped_img2, cv2.COLOR_BGR2GRAY)

# blur
blur2 = cv2.GaussianBlur(gray2, (0,0), sigmaX=50, sigmaY=50)

# divide
divide2 = cv2.divide(gray2, blur2, scale=255)

# otsu threshold
thresh2 = cv2.threshold(divide2, 0, 255, cv2.THRESH_BINARY+cv2.THRESH_OTSU)[1]

# apply morphology
kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (1,1))
image_sharp2 = cv2.filter2D(src=thresh2, ddepth=-1, kernel=kernel)
image_sharp2 = cv2.cvtColor(image_sharp2,cv2.COLOR_GRAY2RGB)
plt.imshow(image_sharp2)
plt.show()

# cv2.imwrite("/content/newTest1.png",cropped_img)
# Perform OCR on the image
result2 = ocr.ocr(image_sharp2, det=True, rec=True, cls=True)

# Print the recognized text
if len(result2[-1]) > 0:
  result2 = result2[-1][0][-1][0].split(".")
  print(result2[0])
else:
  print('J')
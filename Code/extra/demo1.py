
"""
This is to read the text from the photo
"""

import cv2
import pytesseract
from PIL import Image

# 🔹 Set path to tesseract.exe (Windows only)
pytesseract.pytesseract.tesseract_cmd = r"D:\Programming\Tacaract\tesseract.exe"

# 🔹 Read image using OpenCV
image_path = r"D:\Programming\Code\Python\NPTEL Data Science\6_operator.png"   # change your image name if needed
img = cv2.imread(image_path)

# 🔹 Convert image to grayscale
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# 🔹 Apply thresholding (improves text clarity)
_, thresh = cv2.threshold(gray, 150, 255, cv2.THRESH_BINARY)

# 🔹 Convert OpenCV image to PIL image
pil_img = Image.fromarray(thresh)

# 🔹 Extract text using Tesseract OCR
text = pytesseract.image_to_string(pil_img)

print("Extracted Text:\n")
print(text)

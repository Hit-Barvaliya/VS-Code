
"""
I can draw a diagram showing exactly how your job recommendation API will work from user resume → AI model → response. It will make it super clear.
"""

"""
This is to read the data from the pdf
"""
import pdfplumber

text = ""
with pdfplumber.open("sample.pdf") as pdf:
    for page in pdf.pages:
        text += page.extract_text() + "\n"

print("Text from PDF:\n")
print(text)



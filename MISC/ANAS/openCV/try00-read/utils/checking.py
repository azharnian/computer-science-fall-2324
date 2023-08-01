import os
import cv2 as cv

from flask import current_app

def check_human(path):
    img = cv.imread(path)
    gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
    xml_path = os.path.join(current_app.root_path, "utils/", "hear_face.xml")
    hear_cascade = cv.CascadeClassifier(xml_path)
    faces_rect = hear_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5)

    return len(faces_rect)

if __name__ == "__main__":
    print(check_human(""))
import cv2
import numpy as np
from pyzbar.pyzbar import decode
cap = cv2.VideoCapture(0)
cap.set(3, 640)
cap.set(4, 480)

while True:
    success, img = cap.read()
    cv2.imshow('Result', img)
    cv2.waitKey(10)
    code=decode(img)


    for qrCode in code:
        myData = qrCode.data.decode('utf-8')
        data = myData.split(",")
        print("zip:" + data[0])
        print("House:" + data[1])
        print("Place:" + data[2])
        pin='679531'
        if data[0] == pin:
            print("Place the Product in Box A")
        else:
            print("Place the Product in Box B")


    

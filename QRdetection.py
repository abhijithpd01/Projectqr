import cv2
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
        pin2='685603'
        pin3='678901'
        pin4 = '6795310'
        pin5 = '6856030'
        pin6 = '6789010'

        if data[0] == pin4:
            print("Move the product with High Priority to Z box")
            pin4=1;
        elif data[0] == pin:
            print("Place the product in Box A")
            pin=2;
        if data[0] == pin5:
            print("Move the product with High Priority to Y box")
            pin=3
        elif data[0] == pin2:
            print("Move the product to B box")
            pin=4;
        if data[0] == pin6:
            print("Move the product with High Priority to X box")
            pin=5;
        elif data[0] == pin3:
            print("Move the product  to C box")
            pin=6;








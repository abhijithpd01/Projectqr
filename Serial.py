import serial

arduinodata = serial.Serial('/dev/ttyACM0',9600, timeout=1)


while(1):

   user=input('enter data')
   arduinodata.write(user.encode('utf-8'))


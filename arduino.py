import serial
import time

ser = serial.Serial("COM3", 9600)
time.sleep(2)

data = ["e7e5", "c7c5", "c5b4", "b8c6", "g8f6", "d8a5", "b4b3", "a5e1", "YOULOST"]

i=5
for x in data:
	ser.write(x.encode())
	print("LED "+str(i)+" ON")
	i+=1
	time.sleep(3)
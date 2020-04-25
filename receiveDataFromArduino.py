import serial

arduino = serial.Serial("COM3", 9600, timeout=1)

count = 0
while count<3:
	dataFromArduino = str(arduino.readline())
	dataFromArduino = dataFromArduino[2:6]
	print(dataFromArduino)
	count+=1
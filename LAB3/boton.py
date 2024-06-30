import RPi.GPIO as GPIO
from time import sleep

boton = 13
push_boton =0
GPIO.setmode(GPIO.BOARD)  #configuracion de los pines

GPIO.setup(boton, GPIO.IN ) 


while True:
    sleep(10)
    push_boton = GPIO.input(boton)
    if push_boton ==1:
        print("1")
    else:print("0")
		
    
    
    
    

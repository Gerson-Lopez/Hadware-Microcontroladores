import RPi.GPIO as GPIO

led = 11
boton = 13

GPIO.setmode(GPIO.BOARD)  #configuracion de los pines
GPIO.setup(led, GPIO.OUT)
GPIO.setup(boton, GPIO.IN ) 


while True:
    push_boton = GPIO.input(boton)
    if push_boton ==1:
        GPIO.output(led, 0)
    else:
        GPIO.output(led,1)

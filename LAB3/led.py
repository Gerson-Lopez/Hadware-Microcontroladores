import RPi.GPIO as GPIO

led = 11
boton = 13
import sys

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)  #configuracion de los pines
GPIO.setup(led, GPIO.OUT)

def control_led(command):
	if command.lower() == 'on':
		GPIO.output(led, 1)
		print("LED encendido")
	elif command.lower() == 'off':
		GPIO.output(led, 0)
		print("LED apagado")
	else:
		print("Comando no reconocido. Use 'on' o 'off'.")

if __name__ == "__main__":
	if len(sys.argv) != 2:
		print("Uso: python3 control_led.py ön|off~")
	else:
		control_led(sys.argv[1])

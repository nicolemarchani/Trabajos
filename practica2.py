#Pregunta1:notar la diferencia entre
a=25+25
b="25"+"25"
print a,b
#son diferentes porque "a" es la suma de un valor que resulta  50 y en "b" el resultado es una cadena, en este caso 2525
#Pregunta2:programar un formulario basico que pida nombre(str), edad(int)
nombre=raw_input("introduzca su nombre: ")
edad=0
try:
	edad=int(raw_input("introduzca su edad: "))
except:
	print "error"
#Pregunta3: un usuario intenta encontrar la palabra secreta de su programa. La palabra es "secreto". Si el usuario la encuentra, escribir ganaste, sino perdiste
secreto=raw_input("introduzca la palabra secreta: ")
if(secreto=="secreto"):
	print "ganaste"
else:
	print "perdiste"
#pregunta4: escribir un programa que pide un numero al usuario  e indique si este numero es par o impar. utiliza el operador %
numero=int(raw_input("introduzca un numero: "))
if(numero%2==0):
	print"es par"
else:
	print"no es par"
#pregunta5: pedir al usuario 3 enteros(a,b,c). Determinar si es par o impar
a=int(raw_input("introduzca numero 1: "))
b=int(raw_input("introduzca numero 2: "))
c=int(raw_input("introduzca numero 3: "))
cont=0
if(a%2==0):
	print"el numero 1 es par"
	cont=cont+1
else:
	print"el numero 1 no es par"
if(b%2==0):
	print"el numero 2 es par"
	cont=cont+1
else:
	print"el numero 2 no es par"
if(c%2==0):
	print"el numero 3 es par"
	cont=cont+1
else:
	print"el numero 3 no es par"

print"numeros pares"
print cont
#pedir 3 enteros e indicar cual es el mayor
a=int(raw_input("introduzca numero 1: "))
b=int(raw_input("introduzca numero 2: "))
c=int(raw_input("introduzca numero 3: "))
if(a>b)and(a>c):
        print"a es mayor"
if(b>a)and(b>c):
        print"b es mayor"
if(c>a)and(c>b):
        print"c es mayor"














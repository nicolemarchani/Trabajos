# -*- coding: cp1252 -*-
#Programar la funcion factorial de forma recursiva
def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)
#Escribir una función recursiva serie(n) que retorna el resultado de la serie u(0)=3,u(n)=3*u(n-1)+4
def serie(u):
    if u==0:
      return 3
    else:
        return 3*serie(u-1)+4
#Determinar los numeros de Fibonacci
def fib(n):
    if n==0:
        return 0
    if n==1:
        return 1
    else:
        return fib(n-1)+fib(n-2)
#Algoritmo de euclides
def mgd(a,b):
    r=a%b
    if a%b==0:
        return b
    else:
        return mgd(b,r)

#Determinar si un sting es palindrome
def p(a):
    if len(a)<=1:
        return True
    if a[0]==a[len(a)-1]:
        s=a[1:len(a)-1]
        return p(s)
    else:
        return False
    




        

    
    
    
    
    
    
    

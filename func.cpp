#include "myLib.h"
#include <iostream>
using namespace std;

int main ()
{
    int salida;
    cout<<"1: inicio  	0: salida  ";
    cin>>  salida;
    while( salida != 0)
   	 {
   	 
   	 int x;
   	 cout<<"Ingrese un numero:  ";
   	 cin>>  x;
   	 cout<<"1: cuadrado o 2:cubo o 3: fibonacci? ";   	 
   	 int y;
   	 cin>>  y;    
   	 int result;
   	 if( y == 1)
   		 {
   		 result = square(x);
   		 cout<<"el cuadrado es:  " << result << endl;   		 
   		 }
   	 if( y == 2)
   		 {
   		 result= cube(x);
   		 cout<<"el cubo es:  " << result << endl;
   		 }
   	 if( y == 3)
   		 {
   		 result= fibonacci(x);
   		 cout<<"el resultado es:  " << result << endl;
   		 }
   	 cout<<"Deseas continuar? ";
   	 cout<<"1: continuar 	0: salir  ";
   	 cin>>  salida;
   	 }
    return 0;
}


int square(int x)
{
    	return x*x;
}


int cube(int x)
{
return x*square(x);
}


int fibonacci(int n)
{
if(n==0 || n==1)
    {
    return 1;    
    }else{
    return fibonacci(n-2) + fibonacci(n-1);    
    }
}

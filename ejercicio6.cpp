#include<iostream>
using namespace std;

int main(){
char array1 [ 25 ] ;
char array2 [ 25 ] ;

cout<<"Ingrese una palabra: ";
cin>> array1;
// pides datos 
// array 1 
 
/* copiamos  */
int i = 0 ;
while ( array1 [ i ] != '\n' )
{
      array2 [ i ] = array1 [ i ] ;
      i ++ ;
}
array2 [ i ] = '\n' ;
}

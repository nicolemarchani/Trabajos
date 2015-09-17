#include <stdio.h>
#include <iostream.h>

int main () {
  int j,i;
  char a[50],b [50];
  bool valor = false;
    
   cout>>"Introduzca la palabra: ";
    scanf("%s",&b);
    
    for(i=0;i<strlen(b);i++) {
        j = (strlen(b)-1)-i;
         a[i] = b[j];
          if(a[i] == b[i]) {
       valor = true;
    }
      else {
     valor = false;
  break;
    }
   } 

 if(valor == true) {
 cout>>"la palabra es palindromo";
 }
else {
 cout>>"La palabra no es palindromo";
 }

  return 0;
}  

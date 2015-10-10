#include <iostream>
#include <string>
#include<ctype.h>

using namespace std;

string nombre;
string final;
string a=" ";

void intercambio()
{
     int n = nombre.length();
     final = nombre;
     int i = 0;
     while(final[i] != a[0])
                    i++;
     i++;               
     for(int j=i;j<n;j++)
     {
             final[j]= toupper(nombre[j]);
     }
}

int  main()
{
     getline(cin,nombre);
     intercambio();
     cout<<final;
     int p;
     cin>>p;
}

#include <iostream>
#include <fstream>
using namespace std;

int main() {
   char cadena[20];
   ofstream a("archivo.txt"); 
   a << "Escribir esto en file " << endl;
   a.close();

   ifstream b("archivo.txt"); 
   b.getline(cadena, 20);
   cout << cadena << endl;

   return 0;
}

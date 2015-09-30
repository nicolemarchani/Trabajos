#include <iostream>
#include <cstdlib> 
using namespace std;

int mat=100;

void buscar (int **ptr,int w )
{
	 for (int i = 0; i < mat; i++) {
        for (int j = 0; j < mat; j++) {
			if(*(*(ptr + i) + j) == w )
			{
				cout << "fila: "<< i<<" columna:  "<< j<<endl;
			}
		}
	}
}
 
int main()
{
    int **ptr;
 
    ptr = new int* [mat];
    for (int i = 0; i < mat; i++) {
        ptr[i] = new int[mat];
    }
    
    for (int i = 0; i < mat; i++) {
        for (int j = 0; j <mat; j++) {
           
            *(*(ptr + i) + j) = rand() % 100; 
            cout << *(*(ptr + i) + j) << " " ;
        }
        cout << endl;
    }
    int a ;
    cout << "quiero encontrar el valor: " << endl;
    cin >> a;
    cout << "encontramos el " << a << " en: " << endl; 
    buscar (ptr,a);
}

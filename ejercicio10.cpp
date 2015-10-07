#include <iostream>
#include <cstdlib> 
using namespace std;
int n=400000;

void busca (int *p,int w )
{
	 for (int i = 0; i < n; i++)
	    {
       	 if(*(p + i) == w )
			{
				cout << "Lugar:  "<< i <<endl;
			}
		
		}
	
}

int main()
{
    int *p;
 
    p = new int [n];
     for (int i = 0; i < n; i++) 
	 	{
           *(p + i) = rand() % 100; 
           //cout << *(pm + i) << " " ;
    	}
    int a ;
    cout << endl <<"quiero enontrar el valor: " << endl;
    cin >> a;
    cout << "encontramos el " << a << " en: " << endl; 
    busca (p,a);
}
           

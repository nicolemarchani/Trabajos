#include <iostream>
using namespace std;
int n=10;
void rep(char *pm)
{
       char J, I;
       int i, j;
       i = j = 0;
       J = I = ' ';
       while (i < n- 1)       
       {                         
             j = i + 1;
             while (j < n)
             {
                    J =*(pm + j);
                    I = *(pm + i);
                    if (J == I)
                           {*(pm + j) =' ';}
                    j++;
             }
             i++;
       }

}

void print_arr(	char *pm)
{
	cout <<"La cadena es: " <<endl;	
	for (int i = 0; i < n; i++)
        {
        	cout << *(pm + i) << " ";
		}
	cout <<endl;
}

int main()
{
	char *pm;
 
    	pm = new char [n];
	cout <<"Ingrese una cadena"<<endl;
     	for (int i = 0; i < n; i++) 
	{
           cin >>*(pm + i) ; 
           //cout << *(pm + i) << " " ;
    	}
	print_arr(pm);
	rep(pm);
	print_arr(pm);
}

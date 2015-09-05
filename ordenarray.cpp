#include <iostream>
using namespace std;

void ordenar(int a[10]){
	for(int i=0;i<10;i++){
		for(int j=1;j<10;j++){
			if(a[j]<a[j-1])
				{int temp=a[j];
			 	a[j]=a[j-1];
			 	a[j-1]=temp;
				}		
		}
	}
}


int main () {
	int a[10];
	for(int i=0;i<10;i++){
		cout<<"Ingrese un numero: " <<endl;
        cin >> a[i];
	}
	ordenar(a);
	cout<<"la lista ordenada es:  ";
	for(int e=0;e<10;e++){
		cout << a[e] << " ";
	}
	return 0;
}

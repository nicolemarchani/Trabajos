#include <iostream>
#include "alf.cpp"
using namespace std;

void caratula()
{
	cout << "Ingrese una opcion: "<<endl;
	cout << "1: añadir nodo"<<endl;
	cout << "2: atender nodo"<<endl;
	
}
int main()
{
	Stack<int> mypila;
	int opcion;
	int salida =5;
	while(salida != 0)
	{
	caratula();
	cin >> opcion;
	if(opcion ==1)	
		{
		int datos;
		cout << "cuantos datos quiere añadir" <<endl;
		cin>>datos;	
		for(int i =0;i< datos;i++)
			{cout << "Ingrese el dato "<< i <<endl;
			int n;
			cin>>n;		
			mypila.push(n);}
		cout << "la nueva pila es " <<endl;
		mypila.imprimir();}
	if(opcion ==2)	
		{cout << "el dato es:  ";
		mypila.pop();
		cout << "la pila acumulada es:  " <<endl;
		mypila.imprimir();}
	cout << "Que desea hacer ahora? "<<endl;
	cout << "1: volver al menu    0: salir"<<endl;
	cin >> salida;}}

//	cola b;
	//cola mycola + b;

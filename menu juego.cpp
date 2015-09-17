#include <iostream>
using namespace std;

void menu()
{
	cout<<"* Iniciar Juego (1)"  << endl ;;
       // cout<<"* Escoger Nivel (2)" << endl ;;
        cout<<"* Instrucciones (3)" << endl ;;
        cout<<"* Salir         (0)" << endl ;;
}	





void titulo()
{

cout<<" ooooooooo.                             .o8       oooooooooo.  oooo                      oooo"        << endl ;
cout<<" `888   `Y88.                          ´888       `888'   `Y8b `888                      `888"         << endl;
cout<<"  888   .d88'  .ooooo.   .oooo.    .oooo888        888     888  888   .ooooo.   .ooooo.   888  oooo " << endl ;
cout<<"  888ooo88P'  d88' `88b `P  )88b  d88' `888        888oooo888'  888  d88' `88b d88' `Y8  888 .8P'"    << endl;
cout<<"  888`88b.    888   888  .oP.888  888   888        888    `88b  888  888   888 888        888888."    << endl; 
cout<<"  888  `88b.  888   888 d8(  888  888   888        888    .88P  888  888   888 888   .o8  888 `88b." << endl;  
cout<<" o888o  o888o `Y8bod8P' `Y888´´8o `Y8bod88P´     o888bood8P'  o888o `Y8bod8P' `Y8bod8P' o888o o888o"<< endl;

cout<<"====================================================================================================="<< endl;
}


void instrucciones()
{
	cout<<" Instrucciones:";
        cout<<"1° Los movimientos están definidos por:"<< endl;
        cout<<"                *Subir -----1"<< endl;
        cout<<"                *Bajar -----2"<< endl;     
        cout<<"                *Izquierda--3"<< endl;
        cout<<"                *Derecha----4"<< endl;
        cout<<" ---------------------------------------------------"<< endl;
        cout<<"2° Mover al jugador para que este llegue a la salida"<< endl;
}

void creditos()
{
	cout<<"      ***Creditos***       " << endl;
        cout<<"Maria Alejandra Cornejo Lupa" << endl;
        cout<<"          2015              " << endl;
}


int main()
{
	int salida=5;
	titulo();
	while(salida != 0)
	{
				
		cout<< "    ((  BIENVENIDO  ))     " << endl;
		menu();
		
		int y;
		cin>> y;
		
		if(y==1)
		{
		cout<< "Buena suerte...  " <<endl;
		
		}	
		if(y==3)
		{
		instrucciones();
		}
		cout << "Que desea hacer ahora?  1: continuar  0: salida" << endl;
		cin>> salida;
	}
	 creditos();
	 return 0;
}

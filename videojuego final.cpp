#include <iostream>
using namespace std;

void menu()
{
	cout<<"* Iniciar Juego (1)"  << endl ;
	cout<<"* Instrucciones (3)" << endl ;
    cout<<"* Salir         (0)" << endl ;
}	





void titulo()
{

cout<<" ooooooooo.                             .o8       oooooooooo.  oooo                      oooo"         << endl ;
cout<<" `888   `Y88.                          ´888       `888'   `Y8b `888                      `888"         << endl;
cout<<"  888   .d88'  .ooooo.   .oooo.    .oooo888        888     888  888   .ooooo.   .ooooo.   888  oooo "  << endl ;
cout<<"  888ooo88P'  d88' `88b `P  )88b  d88' `888        888oooo888'  888  d88' `88b d88' `Y8  888 .8P'"     << endl;
cout<<"  888`88b.    888   888  .oP.888  888   888        888    `88b  888  888   888 888        888888."     << endl; 
cout<<"  888  `88b.  888   888 d8(  888  888   888        888    .88P  888  888   888 888   .o8  888 `88b."   << endl;  
cout<<" o888o  o888o `Y8bod8P' `Y888´´8o `Y8bod88P´     o888bood8P'  o888o `Y8bod8P' `Y8bod8P' o888o o888o"   << endl;

cout<<"====================================================================================================="<< endl;
}


void instrucciones()
{
	cout<<" Instrucciones:";
        cout<<"1° Los movimientos están definidos por:"<< endl;
        cout<<"                *Subir -----1"<< endl;
        cout<<"                *Bajar -----2"<< endl;     
        cout<<"                *Izquierda--4"<< endl;
        cout<<"                *Derecha----3"<< endl;
        cout<<" ---------------------------------------------------"<< endl;
        cout<<"2° Mover al jugador definifdo por (e) para que este llegue a la salida""(O)"<< endl;
}

void creditos()
{
	cout<<"      ***Creditos***       " << endl;
        cout<<"Maria Alejandra Cornejo Lupa" << endl;
        cout<<"  Nicole Marchani Bustinza " << endl;
        cout<<"          2015              " << endl;
}


void up(int *y, int *x)
{
	*y=*y-1;
}

void down(int *y, int *x)
{
	*y=*y+1;
}

void left(int*y, int *x)
{
	*x=*x+1;
}

void right(int*y, int *x)
{
	*x=*x-1;
}

void mov(int*y, int *x, int z){
	if(z==1)
	{
		up(y,x);
	}
	
	if(z==2)
	{

		down(y,x);
	}
	
	if(z==3)
	{
		left(y,x);
	}

	if(z==4)
	{
		right(y,x);
	}
}

void mov_back(int*y, int *x, int z){
	if(z==1)
	{
		down(y,x);
	}
	
	if(z==2)
	{

		up(y,x);
	}
	
	if(z==3)
	{
		right(y,x);
	}

	if(z==4)
	{
			left(y,x);
	}
}



string mapa_01[12][12]={
		{"","","","","","","","","","",},
		{"","1","1","1","1"," "," ","1","1","1","1","",},
        {""," "," ","1"," ","1","1"," "," ","1"," ",""},
        {""," "," ","1"," "," "," "," ","1"," "," ",""}, 
        {"","1"," ","1","1"," "," ","1"," "," ","1",""},
        {"","1"," "," "," ","1"," "," ","O"," ","1",""},
        {""," "," ","1"," ","1"," "," "," "," "," ",""},
        {""," "," ","1","1"," "," "," ","1","1"," ",""},
        {""," "," ","1"," "," "," "," ","1"," "," ",""},
        {"","1"," "," "," "," ","1"," "," "," ","1",""},
        {"","1","1","1","1","1","1","1","1","1","1",""},
		{"","","","","","","","","","",}};
        
void print_mapa(string V[12][12])   
{
	for(int i=1;i<12;i++) 
	{ 
		for(int j=1;j<12;j++) 
		{ 
			cout<<	V[i][j] << " "; 
		} 
		cout << " " <<endl;
	}
}

void ganaste()
{
	cout<<"   ,ad8888ba,                                                                            88 " << endl ; 
    cout<<"  d8*    `*8b                                                     ,d                     88 " << endl ;  
    cout<<" d8´                                                              88                     88 " << endl ; 
    cout<<" 88             ,adPPYYba,  8b,dPPYba,   ,adPPYYba,  ,adPPYba,  MM88MMM   ,adPPYba,      88 " << endl ;  
    cout<<" 88      88888  **     `Y8  88P*   `*8a  **     `Y8  I8[    **    88     a8P_____88      88 " << endl ;  
    cout<<" Y8,        88  ,adPPPPP88  88       88  ,adPPPPP88   `*Y8ba,     88     8PPaaaaaaa         "  << endl ; 
    cout<<"  Y8a.    .a88  88,    ,88  88       88  88,    ,88  aa    ]8I    88,    *8b,   ,aa      88 "<< endl ; 
    cout<<"   `*Y88888P*   `*8bbdPY*8  88       88  `*8bbdP*Y8  `*YbbdP*´    *Y888   `*Ybbd8**      88"<< endl ; 

}

void perdiste()
{
	cout << " 88888888ba                                    88  88                                  " <<endl;
    cout << " 88      *8b                                   88  ""               ,d                 "<<endl;
    cout << " 88      ,8P                                   88                   88                 "<<endl;
    cout << " 88aaaaaa8P*   ,adPPYba,  8b,dPPYba,   ,adPPYb,88  88  ,adPPYba,  MM88MMM   ,adPPYba,  "<<endl;
    cout << " 88*******    a8P_____88  88P*   *Y8  a8*    `Y88  88  I8[    **    88     a8P_____88  "<<endl;
    cout << " 88           8PPaaaaaaa  88          8b       88  88   `*Y8ba,     88     8PPaaaaaaa  "<<endl;
    cout << " 88           *8b,   ,aa  88          *8a,   ,d88  88  aa    ]8I    88,    *8b,   ,aa  "<<endl;
    cout << " 88            `*Ybbd8**  88           `*8bbdP*Y8  88  `*YbbdP´     *Y888   `*Ybbd8**  "<<endl;

}

int win(string V[12][12],int *y, int *x )    
{
	if (V[*y][*x]== "O")
	{
		return 1;
	}	
	else
	{
		return 0;
	}
} 

string mapa[12][12] =mapa_01;
void juego(int*y, int *x, string V[12][12] )
{
	int sss=3;
	while(sss!=0)
	{
		
		if(win(mapa_01,y,x)!=1)
		{
			cout<<"y: "<<*y <<endl;
			cout<<"x:  "<<*x<<endl;
			cout<< "1:up   2:down  3: right  4:left  "<<endl;
			int z;
			cin>>z;
			mapa[*y][*x]=" ";
			mov(&*y,&*x,z);
			while(mapa[*y][*x]==" ")
			{
				mapa[*y][*x]="e";
				mapa[*y][*x]=" ";
				mov(&*y,&*x,z);
			}
			if(mapa[*y][*x]=="1")
			{
				mapa[*y][*x]="1";
				mov_back(&*y,&*x,z);
				mapa[*y][*x]="e";
			}
			if(mapa[*y][*x]=="")
			{
				perdiste();
				break;
			}					
			print_mapa(mapa);
						
		}
		else
		{
			ganaste();
			break;
		}
	}
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
		string mapa[12][12]=mapa_01;
		int y=1;
		int x=1;
		mapa[y][x]="e";
		print_mapa(mapa);
		juego(&y,&x,mapa);
		
		}	
		if(y==3)
		{
		instrucciones();
		}
		cout<< "" <<endl;
		cout << "Que desea hacer ahora?  1: continuar  0: salida" << endl;
		cin>> salida;
	}
	 creditos();
	 return 0;
}

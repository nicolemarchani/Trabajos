#include<iostream>
using namespace std;

int main(){
    int matA[6][6],matB[6][6],matC[6][6],i,j;
    int x,y,z;

    cout<<"Martriz A"<<endl;
    cout<<"Numero de filas: "; cin>>x;
    cout<<"Numero de columnas: "; cin>>y;
    cout<<endl;
    for(int i=0; i<x; ++i)
        for(int j=0; j<y; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>matA[i][j];
        }

    cout<<"Matriz B"<<endl;
    cout<<"Numero de filas: "<<y<<endl;
    cout<<"Numero de columnas: "; cin>>z;
    cout<<endl;
    for(int i=0; i<y; ++i)
        for(int j=0; j<z; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>matB[i][j];
            
     //inicializar MatC   
     for(int i=0; i<x; ++i)
        for(int j=0; j<z; ++j)
            matC[i][j] = 0;

    //generar MatC
    for(int i=0; i<x; ++i)
        for(int j=0; j<z; ++j)
            for(int p=0; p<y; ++p)
                matC[i][j] += matA[i][p] * matB[p][j]; 
  

    cout<<"Matriz A: "<<endl;
    for(int i=0; i<x; ++i)
    {
        for(int j=0; j<y; ++j)
        {
            cout<<matA[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz B: "<<endl;
    for(int i=0; i<y; ++i)
    {
        for(int j=0; j<z; ++j)
        {
            cout<<matB[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz C: "<<endl;
    for(int i=0; i<x; ++i)
    {
        for(int j=0; j<z; ++j)
        {
            cout<<matC[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
        }
      

   




     

     
     
     
     

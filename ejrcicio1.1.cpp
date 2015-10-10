#include<iostream>
#include <cstdlib> 
using namespace std;


int **matrizA;
int **matrizB;
int **matrizC;
int x,y,z;
  
    
void matA(){
    matrizA=new int *[x];
    for(int i=0;i<x;i++)
            matrizA[i]=new int [y];
    
    cout<<endl;
    for(int i=0; i<x; ++i){
        for(int j=0; j<y; ++j){
                matrizA[i][j]=rand() % 5+1;
                cout<<matrizA[i][j]<<" " ;
                }
        cout<<endl;
    }         
    
}
    
void matB(){
     matrizB=new int *[y];
     for(int i=0;i<x;i++)
             matrizB[i]=new int [z];
     for(int i=0; i<y; ++i){
         for(int j=0; j<z; ++j){
                 matrizB[i][j]=rand() % 5+1;
                 cout<<matrizB[i][j]<<" " ;
                 }
         cout<<endl;
    }
}

     
void matC(){
     matrizC=new int*[x];
     for(int i=0;i<x;i++)
             matrizC[i]=new int [z];
     for(int i=0;i<x;i++){
        for(int j=0;j<z; ++j){
            matrizC[i][j] = 0;
            }
     }
}
   
void product_matriz(){
   //generar MatC
     for(int i=0;i<x;++i){
        for(int j=0;j<z;++j){
            for(int p=0;p<y; ++p){
                matrizC[i][j] += matrizA[i][p] * matrizB[p][j];  
            }
        }
     } 
     for(int i=0; i<y; ++i){
         for(int j=0; j<z; ++j){
                 cout<<matrizC[i][j]<<" " ;
                 }
         cout<<endl; 
         }
} 


int main(){
    int a;
    cout<<"Martriz A"<<endl;
    cout<<"Numero de filas: "; cin>>x;
    cout<<"Numero de columnas: "; cin>>y;
    
    cout<<"Matriz B"<<endl;
    cout<<"Numero de filas: "<<y<<endl;
    cout<<"Numero de columnas: "; cin>>z;
    
    matA();
    matB();
    matC(); 
    product_matriz(); 
    cin>>a;
    

}

#include<iostream>
#include<stdlib.h>
using namespace std;

const int n = 4000000;

int *p;

int divide(int *array, int inicio, int fin) {
    int izquierda;
    int derecha;
    int pivot;
    int temp;

    pivot = array[inicio];
    izquierda = inicio;
    derecha = fin;

    while (izquierda < derecha) {
        while (array[derecha] > pivot) {
            derecha--;
        }

        while ((izquierda < derecha) and (array[izquierda] <= pivot)) {
            izquierda++;
        }

        if (izquierda < derecha) {
            temp = array[izquierda];
            array[izquierda] = array[derecha];
            array[derecha] = temp;
        }
    }

    temp = array[derecha];
    array[derecha] = array[inicio];
    array[inicio] = temp;
    return derecha;

} 
     

void ssort(int *array, int inicio, int fin)
{
    int pivot;
    if (inicio < fin) {
        pivot = divide(array, inicio, fin);
        ssort(array, inicio, pivot - 1);
        ssort(array, pivot + 1, fin);
    }
}

int main()
{
    p = new int[n];
    for(int i=0;i<n;i++)
            p[i]= rand()%50+1;
            
    ssort(p,0,n-1);
    int i;
    for(int i=0;i<n;i++)
            cout<<p[i]<<" ";
    
    cin>>i;
}

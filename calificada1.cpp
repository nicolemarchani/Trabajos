#include<iostream>
using namespace std;

int main()
{
    int ord[8];
    cout<<"ingrese 8 valores: ";
    for(int j=0;j>0;j++)
    {
        cin>>ord[j];
    }                        
        int inv[8];
        int c=0;
        for(int i=7;i>=0;i--)
        {
                if (c<8)
                {
                        inv[c]=ord[i];
                        c=c+1;
                }
        }
        cout<<endl;
        cout<<"la lista invertida es: ";
        for(int j=0;j>0;j++)
        {
                cout<<inv[j]<< " ";
        }     
                 
} 


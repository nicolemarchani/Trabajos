#include<iostream>
#include<math.h>
#include "vector.h"

using namespace std;
void Vector::distancia(){
        float a;
        a=pow(start.x-end.x,2)+pow(start.y-end.y,2);
        a=sqrt(a);
        cout<<a<<endl;
}
 void punto::impr(){
    cout<<"la coordenada del primer punto x: "<<start.x<<endl;
    cout<<"la coordenada del primer punto y: "<<end.x<<endl;
    cout<<"la coordenada del primer punto x: "<<start.y<<endl;
    cout<<"la coordenada del primer punto y: "<<end.y<<endl;
}



void circulo::area(){
    float e;
    e=pow(r,2)*3.14;
    cout<<e<<endl;
    }
void circulo::circun(){
    float c;
    c=2*3.14*r;
    cout<<c<<endl;
    }


int main(){
Vector recta;
recta.start.x=6.0;
recta.start.y=4.0;
recta.end.x=5.0;
recta.end.y=2.0;
circulo mat;
mat.centro.x=5.0;
mat.centro.y=2.0;
mat.r=8;
recta.distancia();
mat.area();
mat.circun();
recta.impr();

return 0;

}











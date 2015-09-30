#include <iostream>
using namespace std;

int mul(int p,int b)
{
	int i =1;
	int a=0;
	int suma=0;
	while(i<b)
	{
		if (a<b-p)
		{
			a=p*i;
		//	cout << a << " ";
			suma =suma+a;
		}
		i=i+1;
	}
	return suma;
}

int main()
{
	int result1 = mul(3,1000);
	//cout << result1<< endl;
	int result2=mul(5,1000);
	//cout << result2<< endl;
	int suma_total= result1 + result2;
	cout << "suma final: "<< suma_total <<endl;
}

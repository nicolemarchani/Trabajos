#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int mat[][4]={1,2,3,4,5,6,7,8,9,10,11,12};

	
int main()
{
	if(**mat ==1)
	{
		cout << "1 es verdad" <<endl;
	}
	else
	{
		cout << "1 es falsa" <<endl;
	}
	
	if(*(*(mat+1)+2) ==7)
	{
		cout << "2 es verdad" <<endl;
	}
	else
	{
		cout << "2 es falsa" <<endl;
	}
	
	if(*(mat[2]+3) ==12)
	{
		cout << "3 es verdad" <<endl;
	}
	else
	{
		cout << "3 es falsa" <<endl;
	}
	
	if((*(mat+2))[2] ==11)
	{
		cout << "4 es verdad" <<endl;
	}
	else
	{
		cout << "4 es falsa" <<endl;
	}
	
	if(*((*mat)+1) ==5)
	{
		cout << "5 es verdad" <<endl;
	}
	else
	{
		cout << "5 es falsa" <<endl;
	}
	
}

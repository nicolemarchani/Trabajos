#include<iostream>
using namespace std;

int main(){
	long long  a=2520;
	while(true) {
		int n=0;
		for(int i=1; i<=20; i++) {
			if(a%i==0) {
				n++;
			}
			else {
				break;
			}
		}
		if(n==20) {
			cout<<a<<endl;
			break;
		}
		a++;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	void *p;
	int a=10;
	double b=12.3;
	char c='g';
	cout<<"Alamat pd memori"<<endl;
	p=&a;
	cout<<"Alamat (a=10)   : "<<p<<endl;
	p=&b;
	cout<<"Alamat (b=12.3) : "<<p<<endl;
	p=&c;
	cout<<"Alamat (c=g)    : "<<p<<endl;
}

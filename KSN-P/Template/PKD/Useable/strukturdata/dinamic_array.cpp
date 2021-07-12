#include<iostream>
using namespace std;
int main(){
	int a[5];
	int*p;
	a[0]=24;
	a[1]=32;
	a[2]=25;
	a[3]=34;
	a[4]=54;
	p=&a[1];
	
	cout<<"alamat p : "<<p<<endl;
	cout<<"nilai p : "<<*p<<endl;
	
	return 0;
}

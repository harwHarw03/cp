#include<iostream>
using namespace std;
int main(){
	int x1,y1,x2,y2,a,b;
	cout<<"Masukkan koordinat :\n";
	cout<<"(x1 y1): ";cin>>x1>>y1;
	cout<<"(x2 y2): ";cin>>x2>>y2;cout<<endl;
	
	a = (x1-x2);

	if(a<0){
		a = -a;
	} else{
		a = a;
	}
	b = (y1-y2);

	if(b<0){
		b = -b;
	} else{
		b = b;
	}
	cout<<"Panjang Garis : ";
	cout<<a + b<<endl;
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int x1,y1,x2,y2,a,b;
	
	cin>>x1>>y1>>x2>>y2;
	
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
	cout<<a + b<<endl;
	
	return 0;
}

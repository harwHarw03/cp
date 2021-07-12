#include<iostream>
using namespace std;
float pangkat(float a,float n){
	float hasil = 1;
	int i;
	for(i = 1;i<=n;i++){
		hasil = hasil*a;
	}		
	return hasil;
}
int main(){
	float x,y,hasil;
	
	cout<<"Terpangkat : ";cin>>x;cout<<endl;
	cout<<"Pemangkat : ";cin>>y;cout<<endl;
	
	hasil = pangkat(x,y);
	
	cout<<"hasil = "<<hasil;
}

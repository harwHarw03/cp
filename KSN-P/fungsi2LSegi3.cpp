#include<iostream>
using namespace std;

float luas_segitiga(float alas,float tinggi){
	float hasil = (alas*tinggi)/2;
	
	return hasil;
}
int main(){
	int a,b;
	
	cout<<"Tinggi : ";
	cin>>a;
	cout<<"Alas : ";
	cin>>b;
	
	int luas=luas_segitiga(a,b);
	
	cout<<"Luas Segitiga : "<<luas;
}

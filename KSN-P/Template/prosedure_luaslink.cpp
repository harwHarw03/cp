#include <iostream>
using namespace std;
void triangle(float x, float y){//worker (without return/feedback)
	float luas = (x*y)/2;
	
	cout<<"Luas segitiga = "<<luas<<endl;
}

int main(){
	int alas, tinggi;
	cout<<"Alas : ";cin>>alas;
	cout<<"Tinggi : ";cin>>tinggi;
	triangle(alas, tinggi);
}


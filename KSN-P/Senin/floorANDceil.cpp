#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float N, F, C;
	cout<<"Welcome to floor and ceil program!"<<endl;
	cout<<"Input N(float/double) : ";
	cin>>N;
	
	F = floor(N);
	C = ceil(N);
	cout<<"Floor  N : "<<F<<endl;
	cout<<"Ceil   N : "<<C<<endl;
	return 0;
}

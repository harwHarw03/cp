#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float N, F, C;

	cin>>N;
	
	F = floor(N);
	C = ceil(N);
	cout<<F<<" "<<C<<endl;
	return 0;
}

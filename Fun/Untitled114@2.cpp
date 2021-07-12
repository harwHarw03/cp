#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int divisor = 0;
	for(int i = 1; i < N; i++){
		int a = N % i;
		int b = N % (N-i);
		if(a = 0)
			divisor = divisor + 1; 
		if(b = 0){
			divisor = divisor + 1;
		if(i = (N-i))
			break;
		}
	}
	cout<<divisor;
}

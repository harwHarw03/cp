#include <iostream>
using namespace std;
int main(){
	unsigned long long T, N;
	cin>>T;
	unsigned long long data[T];
	for(int i = 0; i < T; i++){
		cin>>N;
		data[i] = ((N+1)*N)/2;
	}
	for(int i = 0; i < T; i++){
		cout<<"Case #"<<i+1<<":  "<<data[i]<<endl;
	}
}

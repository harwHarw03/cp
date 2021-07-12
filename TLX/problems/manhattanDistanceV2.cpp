#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int N;
	cin>>N;
	int X[N];
	int Y[N];
	
	for(int i = 0; i < N; i++){
		cin>>X[i]>>Y[i];
	}
	int sum = 0;
	for(int i = 0; i < N; i++){
		for(int j = i+1; j < N; j++){
			sum += abs(X[i] - X[j]) + abs(Y[i] - Y[j]);
		}
	}
	cout<<sum<<endl;
}

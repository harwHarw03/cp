#include <iostream>
using namespace std;
int isPrime(int N){
	if(N <= 1){
		return false;
	}
	int i = 2;
	while(i*i <= N){
		if(N % i == 0){
			return false;
		} else{
			i++;
		}
	}
	return true;
}

int main(){
	int n;
	cin>>n;
//	int listPrima[n];
	int idx = 0;
	for(int i = 2; i < n; i++){
		if(isPrime(i) == true)
			cout<<i<<" ";
		//	listPrima[idx] = i;
		
	//	idx = idx + 1;
	}
//	for(int i = 0; i < n; i++){
//		cout<<listPrima[i]<<" ";
//	}
}

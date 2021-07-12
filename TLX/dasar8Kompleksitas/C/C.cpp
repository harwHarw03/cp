#include<iostream>
using namespace std;

void cekprime(int n){
	int pembagi = 0;
	for(int i = 1; i < n; i++){
		int c = n % i;
		if(c == 0){
			pembagi = pembagi + 1;
		}
	}
	if(pembagi < 5){
		cout<<"Ya"<<endl;
	} else{
		cout<<"Bukan"<<endl;
	}
}

int main(){
	int N;
	cin>>N;
	int arr[N]={};
	
	for(int i = 0; i < N; i++){
		cin>>arr[i];
	}
	for(int j = 0; j < N; j++){
		cekprime(arr[j]);
	}
}

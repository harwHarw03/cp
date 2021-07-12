#include <iostream>
using namespace std;

void loop(int putar, int kad[], int length, int x){//Format pemanggilan = loop(M[k], kado, N, K[k])
	int a = 0;
	for (int i = 0; i < putar; i++){
		for(int j = 0; j < kad[x]; j++){
			a = a + 1;//Pengulangan index
			if(j = length){
				a = 0;//reset index
			}
		}
	}
	cout<<a<<endl;
}

int main(){
	int N,Q;
	int kado[100]={};
	int K[100]={};
	int M[100]={};
	cout<<"Masukkan N Q : "<<endl;
	cin>>N>>Q;
	
	cout<<"Masukkan N kado (integer) : "<<endl;
	for (int i = 0; i < N; i++){
		cin>>kado[i];
	}
	cout<<"Masukkan kado ke Q dan ulang sebanyak M : "<<endl;
	for (int j = 0; j < Q; j++){
		cin>>K[j]>>M[j];
	}
	
	for (int k = 0; k < Q; k++){
		loop(M[k], kado, N, K[k]);
	}
	return 0;
}

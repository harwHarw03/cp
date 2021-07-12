#include<iostream>
using namespace std;
int main(){
	int N;
	int x[N];
	
	cin>>N;
	
	int max = 0;
	for(int i = 0;i<N;i++){
		cin>>x[i];
		if(x[i]>max){
			max=x[i];
		
		} else{
			max=max;
		}
	}

	int jumlah = 0;
	for(int i = 0;i<N;i++){
		if(x[i]>max){
			jumlah = jumlah;
		} else if(x[i]==max){
			jumlah = jumlah +1;
		}
		else{
			jumlah = jumlah;
		}
	}
	cout<<jumlah;
}

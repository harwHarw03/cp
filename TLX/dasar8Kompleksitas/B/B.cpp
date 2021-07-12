#include<iostream>
using namespace std;
int ambil(int bil, int i){
	if(i == 1){
		return 1;
	} else if(bil % i == 0){
		return 1 + ambil(bil, --i);
	} else{
		return 0 + ambil(bil, --i);
	}
}
int cek(int bil){
	if(bil > 1){
		return(ambil(bil, bil) == 2);
	} else{
		return false;
	}
}
int main(){
	int N;
	cin>>N;
	int bil[100] = {};
	
	for(int i = 0; i < N; i++){
		cin>>bil[i];
	}
	for(int j = 0; j < N; j++){
		if(cek(bil[j])){
			cout<<"Ya"<<endl;
		} else{
			cout<<"Bukan"<<endl;
		}	
	}
	
}

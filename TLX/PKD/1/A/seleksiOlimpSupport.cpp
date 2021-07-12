#include <iostream>
using namespace std;
int main(){
	int score[3] = {810, 1000, 801}; 
	int p = 3; 
	int q = 1; 
	int I = 1;
	
	
	int peserta[p];
	for(int i = 0; i < p; i++){//inisialisasi peserta
		peserta[i] = i+1;
	}
	int maks = 0;
	int tmp;
	for(int i = 0; i <= p-2; i++){//mengurutkan score dengan pesertanya_buble sort
		for(int j = p-1; j >= i+1; j--){
			if()
			maks = score[j-1];
			tmp = peserta[j-1];
			score[j-1] = score[j];
			peserta[j-1] = peserta[j];
			score[j] = maks;
			peserta[j] = tmp;
		}
	}
	for(int i = 0; i < p; i++){
		cout<<peserta[i]<<endl;
	}
/*	bool tr = false;
	for(int i = 0; i < q; i++){//memasukkan ke struct
		if(peserta[i] == I)
			tr = true;
	}
	if(tr == true)
		cout<<"YA"<<endl;
	else
		cout<<"TIDAK"<<endl;*/
}

#include <bits/stdc++.h>
using namespace std;
/*struct W{
	int winner;
}lomba[8];*/
void juri(int score[], int p, int q, int I, int status[], int ke){
	int peserta[p];
	for(int i = 0; i < p; i++){//inisialisasi peserta
		peserta[i] = i+1;
	}
	int maks = 0;
	int tmp;
	for(int i = 0; i <= p-2; i++){//mengurutkan score dengan pesertanya_buble sort
		for(int j = p-1; j >= i+1; j--){
			if(score[j-1] > score[j]){
				maks = score[j-1];
				tmp = peserta[j-1];
				score[j-1] = score[j];
				peserta[j-1] = peserta[j];
				score[j] = maks;
				peserta[j] = tmp;
			}
			
		}
	}
	bool tr = false;
	for(int i = 0; i < q; i++){//memasukkan ke struct
		if(peserta[i] == I)
			tr = true;
	}
	if(tr == true)
		status[ke] = 1;
	else
		status[ke] = 0;
}
int main(){
	int N, P, Q, n1, n2, n3;//nlomba, npeserta, njawara, nilai1,2,,3
	cin>>N;
	int x;//jawara lomba x
	int statoes[N];
	for(int i = 0; i < N; i++){
		cin>>P>>Q;
		int skor[P];//skor peserta
		cout<<"P000";cin>>x;
		for(int j = 0; j < P; j++){
			cout<<"P000"<<j+1<<" ";cin>>n1>>n2>>n3;
			skor[j] = n1 + 3*n2 + 5*n3;//total skor
		}
		juri(skor, P, Q, x, statoes, i);//fungsi penyeleksian
	}
	for (int i = 0; i < N; i++){
		if(statoes[i] == 1)
			cout<<"YA"<<endl;
		else
			cout<<"TIDAK"<<endl;
	}
}


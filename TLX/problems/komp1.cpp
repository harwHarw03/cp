#include <bits/stdc++.h>
using namespace std;
int main(){
	int T, M, N, A, B, C, x;
	cin>>T;
	int win[T];
	int data[M];
	
	for(int i = 0; i < T; i++){
		cin>>M>>N;
		cout<<"P000";cin>>x;
		for(int j = 0; j < M; j++){
			cout<<"P000"<<j+1;cin>>A>>B>>C;
			data[j] = A+(B*3)+(C*5);
			x = data[x];
		}
		sort(data, data + M);
		win[i] = data[M];
		if(x == win[i])
			cout<<"YA";
		else
			cout<<"BUKAN";
	}
}

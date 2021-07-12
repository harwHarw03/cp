#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	int N, P, Q;
	string o = "o";
	cin>>N;
	cin>>P>>Q;
	string kur5i[P];
	for(int i = 0; i < P; i++){
		cin>>kur5i[i];
	}
//	cek:
//	cout<<kur5i[1][2];
//-----------------------------------------------------
	int arr[P];
	for(int i = 0; i < P; i++){
		int tmp = 0;
		for(int j = 0; j < Q; j++){
			if(kur5i[i][j] == o[0])
			tmp = tmp + 1;
		}
		if(tmp == N){
			arr[i] = 1;
		} else{
			arr[i] = 0;
		}
	}
    for(int i = 0; i < P; i++){
		if(arr[i] = 1){
			cout<<"SNG"<<endl;			
			break;
		}
		if(arr[i] = 0){
			cout<<"TdkSNG"<<endl;
		}
	}

	
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	bool ckprim;
	cin>>a;
	
	for(int i = 1; i <= a; i++){
		cin>>b;
		ckprim = true;//ckprim default
		if(b < 2){
			ckprim = false;
		}
		for(int j = 2; j <= trunc(sqrt(i)); j++){
			if(b % j == 0){
				ckprim = false;
				break;
			}
		}
		if(ckprim){
		cout<<"Ya"<<endl;
		} else{
		cout<<"Bukan"<<endl;
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	int modus[] = {};
	cin>>N;
	int data[N];
	
	
	for(int i = 0; i < N; i++){
		cin>>data[i];
	}
	
	for(int k = 0; k < N; k++){
		for(int j = 1; j < N; j++){
			if(data[k] = data[j]){
				modus[k] = data[k];
			}
		}
	}
	int l = sizeof(modus)/sizeof(modus[0]);
	int makusu = *max_element(modus, modus + l);
	cout<<makusu<<endl;
}

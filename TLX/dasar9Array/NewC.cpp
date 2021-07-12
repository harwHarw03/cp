#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int a[] = {};
	int muncul[] = {};
	int jml[] = {};
	
	for(int i = 0; i < N; i++){
		cin>>a[i];
	}
	int x = 0;
	for(int i = 0; i < N; i++){
		for(int j = i+1; j < N; j++){
			if(muncul[x] != a[i]){
				if(a[i] == a[j]){
					muncul[x] = a[i];
					jml[x] = jml[x] +1;
				} else{
					x++;				
				}	
			}
		}
	}
	int max = 0;
	int maks = 0;
	int l = sizeof(muncul)/sizeof(muncul[0]);
	for(int i = 0; i < l; i++){
		if(jml[i] > max){
			max = jml[i];
			maks = muncul[i]; 
		}
	}
	cout<<maks<<endl;
}

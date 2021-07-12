#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int data[N];
	
	for(int i = 0; i < N; i++){
		cin>>data[i];
	}
	sort(data, data + N);
	int x = 0;
	int jml[x] = {};
	int calon[x] = {};
	for(int i = 0; i < N; i++){
		for(int j = (i+1); j < N; j++){
			if(data[i] == data[j]){
				jml[x] = jml[x] + 1;
				calon[x] = data[i];
			} else{
				i = j;
				x++;
			}
		}
	}

	int l= sizeof(calon)/sizeof(calon[0]);
	for(int i = 0; i < l; i++){
		cout<<jml[i]<<endl;
		cout<<calon[i]<<endl;
	}
/*	int modus;
	int l= sizeof(calon)/sizeof(calon[0]);
	for(int i = 0; i < l; i++){
		if(jml[i+1] > jml[i]){
			modus = calon[i+1];
		} else{
			modus = calon[i];
		}
	}
	cout<<modus<<endl;
*/}

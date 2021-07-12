#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, arr[] = {};
	in calon[] = {};
	int modus, max;
	cin>>n;
	int tmp[] = {};//nnti coba[] = {0};
	int x = 0;
	
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	for(int i = 0; i < n; i++){

		if(i > 0){
			for(int j = 0; j < i; j++){
				if(arr[i] == arr[j]){
					calon[x] = arr[j];
					tmp[x] = tmp[x] + 1;
				} else{
					i = j;
					x++;
				}
			}
		}
	}
	int calon2[] = {};
	for(int j = 0; j <; ++j){
		max == 0;
		if(jml[j] >= calon2){
			calon2[i] = arr[j];
			modus = j;
		}
	}
	cout<<modus<<endl;
	return 0;
}

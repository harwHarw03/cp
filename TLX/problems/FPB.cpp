#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[3];
	for(int i = 0; i < 3; i++){
		cin>>arr[i];
	}
	int mak = *max_element(arr, arr + 3);
	int fpb = 1;
	
	for(int i = mak; i > 1; i--){
		if(arr[0] % i == 0 && arr[1] % i == 0 && arr[2] % i == 0){
			fpb = fpb*i;
		} 
	}
	cout<<fpb<<endl;
}

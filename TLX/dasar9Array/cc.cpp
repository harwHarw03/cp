#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int arr[N];
	int modus[1000];
	
	for(int i = 0; i < N; i++){
		cin>>arr[i];
	}
	sort(arr, arr + N);
	int tmp = 0;
	int x = 0;
	
	for(int i = 1; i < N;){
		if(arr[x] == arr[i]){
			tmp++;
			x++;
			i++;
		} else{
			tmp = 0
		}
	}
}

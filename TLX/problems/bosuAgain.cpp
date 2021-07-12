#include <iostream>
using namespace std;
int main(){
	int N;
	int arr[1000] = {};
	
	cin>>N;
	for(int i = 0; i < N; i++){
		cin>>arr[i];
	}
	int res = 0;
	for(int i = 0; i < N; i++){
		for(int j = 1; j <= arr[i]; j++){
			res = res + j;
		}
		cout<<"Case #"<<i+1<<" :  "<<res<<endl;
		res = 0;
	}
}

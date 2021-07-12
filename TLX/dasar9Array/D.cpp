#include <iostream>
using namespace std;
int main(){
	int M,N;
	int arr[100][100];
	cin>>M>>N;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			cin>>arr[i][j];
		}
	}
	for(int j = 0; j < N; j++){
		for(int i = 0; i < M; i++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}

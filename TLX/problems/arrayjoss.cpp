#include <iostream>
#include <string>
using namespace std;
int main(){
	int N;
	cin>>N;
	int arr[N];
	char joss;
	for(int i = 0; i < N; i++){
		cin>>arr[i];
	}
	cin>>joss;
	int jml = 0;
	for(int i = 0; i < N; i++){
		for(int j = i; j < N; j++){
			switch(joss){
				case ('+'):
					jml += arr[i] + arr[j];
					break;
				case ('-'):
					jml += arr[i] - arr[j];
					break;
				case ('*'):
					jml += arr[i] * arr[j];
					break;
				case ('/'):
					jml += arr[i] / arr[j];
					break;
			}
		}
	}
	if(jml == N){
		cout<<"ya"<<endl;
	} else{
		cout<<"TIDAK"<<endl;
	}
}

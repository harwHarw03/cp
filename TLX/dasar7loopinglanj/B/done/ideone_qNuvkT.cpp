#include <iostream>
using namespace std;

int main() {
	int N,i,j,k;
	cin>>N;
	
	for(i = 0;i<N;i++){
		for(j = N;j>i;j--){
			cout<<" ";
		}
		for(k = 0;k <=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
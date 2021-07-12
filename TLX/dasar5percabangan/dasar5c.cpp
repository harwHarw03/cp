//cetak genap positif
#include<iostream>
using namespace std;
int main(){
	int N;
	
	cin>>N;

	if(N>0){	
		int a = N % 2;
		if(a==0){
			cout<<N<<endl;
		}
	}
}

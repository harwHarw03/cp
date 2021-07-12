#include<iostream>
using namespace std;

int faktorial(int n){
	if(n==1){
		return n;
	} else{
		return n*faktorial(n-1);
	}
}
int main(){
	int n;
	int hasil;
	
	cin>>n;
	
	hasil=faktorial(n);
	
	cout<<hasil;
}

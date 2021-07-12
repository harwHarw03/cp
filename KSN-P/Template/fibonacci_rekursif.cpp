#include <iostream>
using namespace std;
long int fibonacci(int n){
	if(n == 0){
		return 0;
	} else if(n == 1){
		return 1;
	} else if(n == 2){
		return 1;
	} else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}



int main(){
	int n;
	int hasil;
	
	cin>>n;
	
	hasil=fibonacci(n);
	
	cout<<hasil;
}

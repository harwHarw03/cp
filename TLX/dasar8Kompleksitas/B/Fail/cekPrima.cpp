#include<iostream>
using namespace std;
int main(){
	int N;
	
	cin>>N;
	for(int i = 0; i < N; i++){
		int x;
		cin>>x;
		
		bool prime = true;
		if(x==1){
			prime = false;
		}
		int divisor = 2;
		while(divisor < x){
			if(x % divisor == 0){
				prime = false;
			}
			divisor++;
		}
		for(int z = 0; z < x; z++){
			if(prime)
			cout<<"ya"<<endl;
		else
			cout<<"bukan"<<endl;
		}
		
	}return 0;
}

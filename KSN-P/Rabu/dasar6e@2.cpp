#include<iostream>
using namespace std;
int main(){
	int n;
	
	cin>>n;
	if(n % 2 != 0){
		cout<<"Bukan";
	} else{
	
		for(int i = 0;i < n;i++){
			int a = n%(2*i);
			while(a = 0){
				if(a != 0){
					break;
					cout<<"bukan";
				} else if(n = 1){
					break;
					cout<<"ya";
				}
			}
		}
	}
}

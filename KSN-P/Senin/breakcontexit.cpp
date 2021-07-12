#include<iostream>
using namespace std;
int main(){
	int a;
	
	cout<<"Masukkan Nominal 1-1000 :"<<endl;
	cin>>a;
	if(a<42){
		for(int i = 1;i<=a;i++){
			if(i % 10 == 0){
				continue;
			}
			cout<<i<<endl;
		}
	} else{
		for(int i = 1;i<=42;i++){	
			if(i % 10 == 0){
				continue;
			}
			cout<<i<<endl;
		}
		cout<<"ERROR"<<endl;
	}
}

#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Print 1 & 0 sebanyak N kali!"<<endl;
	cin>>a;
	
	for(int i = 0;i<a;i++){
		for(int j = 0;j<a;j++){
			cout<<"1 0";
		}
		cout<<"\n";
	}
	return 0;
}

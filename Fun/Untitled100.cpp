#include <iostream>
using namespace std;//HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHA.........................................
int main(){
	int m;
	int a[100]={};
	
	cin>>m;
	cout<<"Masukkan Data : ";
	for(int i = 0; i < m; i++){
		cin>>a[i];
		if(i < m-1)
			cout<<", ";
		else
			cout<<endl;
	}
	cout<<"Masukan x 2 : ";
	for(int j = 0; j < m; j++){
		a[j] = a[j] * 2;
		cout<<a[j]<<", ";
	}
	return 0;
}

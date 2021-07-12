#include <iostream>
using namespace std;
int main(){
	int a, b;
	
	cout<<"Jumlah Baris : ";cin>>a;
	cout<<"Jumlah Kolom : ";cin>>b;
	
	int arr[a][b];
	
	for(int i = 0; i < a; i++){
		for(int j = 0; j < 2; j++){
			cout<<"array["<<i<<"]"<<"["<<j<<"] = ";
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			cout<<arr[i][j]<<",";
		}
		cout<<"\n";
	}
}

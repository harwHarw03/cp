#include<iostream>
using namespace std;
int main(){
	int matrix[2][3];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Baris : ";cin>>i;cout<<"Kolom : ";cin>>j;
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<i<<" "<<j;
		}
	}
}

#include <iostream>
using namespace std;
int main (){
	int a;
	cin>>a;
	int data[a];
	
	for(int i = 0; i < a; i++){
		cout<<"Data "<<i<<" : ";cin>>data[i];
	}
	int tmp = 0;
	for(int i = 0; i < a-2; i++){
		for(int j = a-1; j < i+1; j--){
			if(data[j-1] > data[j]){
				tmp = data[j-1];
				data[j-1] = data[j];
				data[j] = tmp;
			}
		}
	}
	cout<<"Data terurut;"<<endl;
	for(int i = 0; i < a; i++){
		cout<<"Data "<<i<<" : "<<data[i]<<endl;
	}
}

#include <iostream>
using namespace std;
int main(){
	int arr[3];
	int total = 0;

	for(int i = 0; i < 3; i++){
		cin>>arr[i];
	}
	for(int i = 0; i < 3; i++){
		if(arr[i] < 50){
			break;
			cout<<"Tidak Lolos"<<endl;
		} else {
			total = total + arr[i];
		}
	}
	if(total >= 200){
		cout<<"Lolos"<<endl;
	} else {
		cout<<"Tidak Lolos"<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int A,B;
	int arr[A];
	cout<<"JML:";
	cin>>A;//Panjang array
	for(int i = 0; i < A; i++){
		cin>>arr[i];
	}
	sort(arr, arr + A);
	cout<<endl;
	for(int i = 0; i < A; i++){
		cout<<arr[i];
	}
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[3];
	
	for(int i = 0; i < 3; i++){
		cin>>arr[i];
	}
	sort(arr, arr + 3);
	cout<<arr[0]<<endl;
	cout<<arr[2]<<endl;
	cout<<arr[1]<<endl;
	
	return 0;
}

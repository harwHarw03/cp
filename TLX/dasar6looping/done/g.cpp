#include <bits/stdc++.h>
using namespace std;
int main(){
	int a; cin>>a;
	int arr[100];
	for(int i = 0; i < a; i++){
		cin>>arr[i];
	}
	int max = *max_element(arr, arr + a);
	int min = *min_element(arr, arr + a);
	
	cout<<max<<" "<<min<<endl;
}

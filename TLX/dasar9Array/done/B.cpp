#include <iostream>
using namespace std;
int main() {
	int N = 0;
	int arr[100]={};
	int a = 0;
	
	while (cin>>arr[N]) {
	N++;
	a = a + 1;
	}
	for(int j = a-1; j >= 0; j--){
		cout<<arr[j]<<endl;
	}
	return 0;
}

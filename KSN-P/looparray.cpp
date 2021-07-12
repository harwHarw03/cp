#include <iostream>
using namespace std;
void tuk4r(int kado[], int num, int loop, int length){
	int index = 0;
	for(int i = 0; i < loop; i++){
		for(int j = 0; j < kado[num]; j++){
			index = (num + kado[num] % length) +1;
			num = kado[index];
		}
	}
	cout<<index<<endl;
}
int main(){
	int arr[5] = {3,2,4,5,3};
//	for(int i = 0; i < 5; i++){
//		cin>>arr[i];
//	}
	int idx, x;
	cin>>idx>>x;
	tuk4r(arr, idx, x, 5);
}


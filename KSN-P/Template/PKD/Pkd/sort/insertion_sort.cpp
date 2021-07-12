#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
 int i, j ,tmp;
 
for (i = 1; i < n; i++) {
    j = i;
 
while (j > 0 && arr[j - 1] > arr[j]) {
    tmp = arr[j];
    arr[j] = arr[j - 1];
    arr[j - 1] = tmp;
    j--;
    }

}
}
void printArray(int arr[], int n)
{
	int i;
	for (i=0; i<n ;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}


int main() {
	
	int arr [] = {10,7,8,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertion_sort(arr,n);
	printArray (arr,n);
	return 0;
}



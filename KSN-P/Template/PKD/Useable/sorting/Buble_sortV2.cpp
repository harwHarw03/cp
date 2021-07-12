#include <iostream>
using namespace std;
void Bubble_Sort(int A[], int length){
	int i, j, tmp;
	for(i = 0; i <= (length-2); i++){
		for(j = length-1; j >= (i+1); j--){
			if(A[j-1]>A[j]){
				tmp = A[j-1];
				A[j-1] = A[j];
				A[j] = tmp;
			}
		}
	}
}
int main(){
	int N;
	cin>>N;
	int array[100];
	for(int i = 0; i < N; i++){
		cout<<"Array "<<i<<" : ";cin>>array[i];
	}
	Bubble_Sort(array, N);
	
	cout<<"Array Terurut : ";
	for(int i = 0; i < N; i++){
		cout<<array[i]<<" ";
	}
}


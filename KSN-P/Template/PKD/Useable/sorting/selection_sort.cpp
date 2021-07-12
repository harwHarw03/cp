#include<iostream>
using namespace std;

void select(int arr[], int n){
	int min,tmp;
	for(int i = 0; i < n - 1; i++){
		min=i;
		for(int j = i + 1; j < n; j++){
			if(arr[j]<arr[min])
				min=j;
		}
		if(min != i){
			tmp=arr[i];
			arr[i]=arr[min];
			arr[min]=tmp;
		}
	}
}

int prnt(int arr[], int n){
	for(int i = 0; i < n; i++)
	cout<<arr[i]<<" ";
}
int main(){
	int data[7]={4,3,2,5,1,6,7};
	int size=7;
	
	select(data,size);
	prnt(data,size);
}

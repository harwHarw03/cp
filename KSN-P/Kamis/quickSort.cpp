#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int i=(low-1);
	
	for(int j=low;j<=high;j++){
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}
void swap(int*a,int*b){
	int t=*a;
	*a=*b;
	*b=t;
}
void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++)
	cout<<arr[i];
	cout<<"n";
}
void quickSort(int arr[],int low,int high){
	if(low<high){
		int pi=partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}
int main(){
	int arr[]={10,3,7,8,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	cout<<"Sorted Array :"<<endl;
	printArray(arr,n);
	return 0;
}

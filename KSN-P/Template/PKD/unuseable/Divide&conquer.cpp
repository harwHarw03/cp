#include<iostream>
using namespace std;
int mergesort(int arr[],int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		mergesort(arr,l,r);
	}
}
void merge(int arr[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	
	int L[n1],R[n2];
	
	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(j=0;j<n2;j++)
		R[j]=arr[m+1+j];
	i=0;
	j=0;
	k=0;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}
	}
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=R[j];
		j++;
		k++;
	}
}
void printArray(int arr[],int n){
	int i=0;
	for(;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={12,11,13,5,4,6};
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Array Tersortir : "<<endl;
	printArray(arr,arr_size);
}

#include<iostream>
using namespace std;

void insertion_sort(int arr[], int length){
	int i,j,tmp;
	
 for(i=1;i<=length-1;i++) {
        tmp=arr[i];
        j=i-1;
 
        while((tmp<arr[j])&&(j>=0)) {
            arr[j+1]=arr[j];    
            j=j-1;
        }
 
        arr[j+1]=tmp; 
    }
}

int prnt(int arr[], int n){
	int i;
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
}

int main(){
	int data[6]={10,9,5,20,13,12};
	int pjg = 6;
	insertion_sort(data,pjg);
	prnt(data,pjg);
	
}

#include<iostream>
using namespace std;

void bubble(int arr[],int length){
	bool notsorted = true;
	int tmp,j=0;
	
	while(notsorted){
		notsorted=false;
		j++;
		for(int i=0;i<length-j;i++){
			if(arr[i]>arr[i+1]){
				tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
				notsorted=true;
			}
			
		}
	}
	
	
}

int prnt(int arr[], int n){
	int i=0;
	for(;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int data[7]={4,2,5,7,6,3,1};
	int size=7;
	
	bubble(data, size);
	prnt(data, size);
}

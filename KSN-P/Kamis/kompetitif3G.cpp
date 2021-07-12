#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int sort(int data[], int length){
	int i,j,tmp;
	
 for(i=1;i<=length-1;i++) {
        tmp=data[i];
        j=i-1;
 
        while((tmp<data[j])&&(j>=0)) {
            data[j+1]=data[j];    
            j=j-1;
        }
 
        data[j+1]=tmp; 
    }
}*/
double cariMedian(int data[], int length){
	sort(data, data+length);//sort simple (library hrs #include<bits/stdc++.h>)
	
	if(length%2 !=0){
		return (double)data[length/2];
	} else{
		return (double)(data[(length-1)/2])+(data[length/2])/2;
	}
}
int main(){
	int x;
	int baju[100];
	cin>>x;
	
	for(int i=0;i<x;i++){
		cin>>baju[i];
	}
	
	int N = sizeof(baju)/sizeof(baju[0]);
	
	cout<<"Median : "<<cariMedian(baju, N);
	
	return 0;
	
}

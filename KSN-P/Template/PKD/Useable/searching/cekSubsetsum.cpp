#include<iostream>
using namespace std;
bool cekSubsetsum(int data[],int n,int sum){
	if(sum==0)
	return true;
	
	if(n==0 && sum !=0)
	return false;

	if(data[n-1]>sum)
	return cekSubsetsum(data,n-1,sum);
	
	return cekSubsetsum(data,n-1,sum) || cekSubsetsum(data,n-1,sum-data[n-1]);
	cout<<data[n]<<endl;
}
int tampil(int data[],int n,int sum){
	if(sum==0)
		return true;
		if(n==0 && sum !=0)
		return false;
		if(data[n-1]>sum)
		return cekSubsetsum(data,n-1,sum);
		
		return cekSubsetsum(data,n-1,sum) || cekSubsetsum(data,n-1,sum-data[n-1]);
	for(int i=0;i<n;i++){
		
		cout<<data[n];
	}
}
int main(){
	int data[]={4,6,8,5,4,3};
	int sum= 0;
	int n=sizeof(data)/sizeof(data[0]);
	
	tampil(data,n,sum);
	
	if(cekSubsetsum(data,n,sum)==true)
	cout<<"Ditemukan";
	else
	cout<<"Tidak Ditemukan";
	return 0;
}

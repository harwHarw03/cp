#include<iostream>
using namespace std;
int caribiner(int data[], int n, int k){
	int ada, bawah,atas,tengah,posisi;
	ada=0;
	bawah=0;
	atas=n-1;
	while(atas>=bawah){
		tengah=(atas+bawah)/2;
		if(k>data[tengah])
		bawah=tengah+1;
		else{
			ada=1;
			posisi=tengah;
			bawah=atas+1;
		}
	}
	if(!ada)
	posisi=-1;
	return posisi;
}
int main(){
	int data[]={1,2,3,4,5,6,7,7,9};
	data [9];
	for(int i = 0; i < 9; i++){
		cout<<"["<<i<<"] = "<<data[i]<<endl;
	}
	int dicari;
	cout<<"Dicari : ";cin>>dicari;
	
	cout<<"Posisi "<<dicari<<" Dlm Larik :"<<caribiner(data,9,dicari)<<endl;
	
}


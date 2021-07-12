#include<iostream>
using namespace std;
int cari(int data[],int n, int k){
	int posisi,i,ketemu;
	if(n<=0){
		posisi=-1;
	} else{
		ketemu = 0;
		i=0;
		while((i<n-1) && !ketemu)
		if(data[i] == k)
		{
			posisi = i;
			ketemu=1;
		} else{
			i++;
		} if(!ketemu)
		posisi=-1;
		
		return posisi;
	}
		
}
int main(){
	int data[10]={2,5,3,9,7,5,4,6,4,3};
	for(int i = 0; i < 10; i++){
		cout<<i<<" : "<<data[i]<<endl;
	}
	int dicari;
	
	cout<<"Dicari ";cin>>dicari;cout<<"Posisi = "<<cari(data,10,dicari)<<endl;
	return 0;
}

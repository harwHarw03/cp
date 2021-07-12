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
	int A;
	int dicari;
	cout<<"Panjang Array : ";cin>>A;
	
	int data[A];
	for(int i = 0; i < A; i++){
		cout<<"Array ["<<i<<"] = ";cin>>data[i];
	}
	cout<<endl<<"Cari : ";cin>>dicari;
	cout<<"Posisi "<<dicari<<" (index): "<<cari(data,A,dicari)<<endl;
	return 0;
}

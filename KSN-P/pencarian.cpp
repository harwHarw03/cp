#include<iostream>
using namespace std;
int main(){
	int x,i;
	bool cari;
	int tabel[9];
	
	i=0;cari=false;
	for((i<9) && (!cari)){
		if(tabel[i]==x){
			cari=true;
		} else{
			i++;
		}
	}if(cari){
		cout<<x<<" Iya";
		
	} else{
		cout<<x<<"tidak";
	}
}

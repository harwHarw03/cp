#include<iostream>
using namespace std;
#define max 10

struct tumpukan{
	int atas;
	int data[max];
}T;
void awal(){
	T.atas;
}
int kosong(){
	if(T.atas == -1)
		return 1;
	else
		return 0;
	
}
int penuh(){
	if(T.atas == max-1)
		return 1;
	else 
		return 0;
}
void push(int data){
	if(kosong()==1){
		T.atas++;
		T.data[T.atas]=data;
		cout<<"Data "<<T.data[T.atas]<<"masuk ke stack"<<endl;
	}
	else if(penuh()==0){
		T.atas++;
		T.data[T.atas]=data;
	} else{
		cout<<"Tumpukan penuh"<<endl;
	}
}
void pop(){
	if(kosong()==0){
		cout<<"Data teratas sudah terambil"<<endl;
		T.atas--;
	}
	else
		cout<<"Data Kosong"<<endl;
	
}
void tampil(){
	if(kosong()==0){
		for(int i=T.atas;i>=0;i--){
			cout<<"\nTumpukan ke "<<i<<"="<<T.data[i];
		}
	}else {
		cout<<"Kosong"<<endl;
	}
}
int main(){
	awal;
	tampil();
	push(20);
	push(30);
	tampil();
	pop();
	tampil();
}

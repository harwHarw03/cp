#include<stdio.h>
#include<conio.h>
#include<iostream>
#define max 8
using namespace std;
struct Queue{
	int data[max];
	int head;
	int tail;
};
Queue antrian;
void Create(){
	antrian.head=antrian.tail=-1;
}
int isEmpty(){
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}
int isFull(){
	if(antrian.tail==max-1){
		return 1;
	cout<<" Data Penuh"<<endl;
	}	else
		return 0;
}
void Enqueue(int data){
	if(isEmpty()==1){
		antrian.head=antrian.tail=0;
		antrian.data[antrian.tail]=data;
		cout<<antrian.data[antrian.tail];
	}
	else{
		antrian.tail++;
		antrian.data[antrian.tail]=data;
		cout<<antrian.data[antrian.tail];
	}
}
int Dequeue(){
	int i;
	int e=antrian.data[antrian.head];
	for(int i=antrian.head;i<=antrian.tail-1;i++){
		antrian.data[i]=antrian.data[i+1];
	}
	antrian.tail--;
	return e;
}
void Clear(){
	antrian.head=antrian.tail=-1;
	cout<<"Data Clear";
}
void Tampil(){
	if(isEmpty()==0)
		for(int i=antrian.head;i<=antrian.tail;i++)
	cout<<antrian.data[i]<<" ";
	else
	cout<<"Data Kosong\n";
}
int main(){
	int pilih;
	int data;
	Create();
	do{
		system("cls");
		cout<<"Pilihan :"<<endl;
		cout<<"1.Enqueue\n";
		cout<<"2.Dequeue\n";
		cout<<"3.Tampil\n";
		cout<<"4.Clear\n";
		cout<<"5.Keluar\n";
		cout<<endl;
		cout<<"Masukan pilihan anda :"<<endl;
		cin>>pilih;
		
	switch(pilih){

		case 1:
			cout<<"Data :";cin>>data;
			Enqueue(data);
			break;
		case 2:
			if(isEmpty()==0)
				cout<<"Elemen yg keluar : "<<Dequeue();
			else
				cout<<"data kosong"<<endl;
			break;
		case 3:
			Tampil();
			break;
		case 4:
			Clear();
			break;
		case 5:
			break;
	}
	getch();
	} while(pilih!=5);
	
	return 0;
}

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
#define max 100

struct susunan{
	int kiri;
	char kalimat[max];
}T;

void masukan(char x){
if(T.kiri==max){
	cout<<"Susunan Penuh"<<endl;
	getch();
	} else{
		T.kiri=T.kiri+1;
		T.kalimat[T.kiri]=x;
	}
}
char ambil(){
	char hasil;
	if(T.kiri==0){
		cout<<"Susunan kosong"<<endl;
		hasil=' ';
	}
 	else{
		hasil=T.kalimat[T.kiri];
		T.kiri=T.kiri-1;
	}
	return hasil;
}
int main(){
	int i;
	char kata[max];
	system("cls");
	T.kiri=0;
	
	cout<<"Masukkan kalimat : ";
	gets(kata);
	system("cls");//sama seperti clrscr
	
	cout<<"Kata yg akan dibalik : "<<kata<<endl;
	
	for(int i=0;i<strlen(kata);i++){
		masukan(kata[i]);
	}
	cout<<"Kalimat setelah dibalik : ";
	
	for(int i=0;i<strlen(kata);i++){
		cout<<""<<ambil();
	}
}

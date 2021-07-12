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
	int N;
	cin>>N;
	int arr[N];
	char kata[max];
	T.kiri=0;
	
	for(int i = 0; i < N; i++){
		gets(kata);	
		for(int j = 0; j < strlen(kata); j++){
		masukan(kata[j]);
		}
		arr[i] = ambil();
	}
	
	for(int i = 0; i < N; i++){
		cout<<arr[i]<<" ";
	}
}

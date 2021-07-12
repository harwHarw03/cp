#include<iostream>
#include<windows.h>
using namespace std;
void pushH(int num){
	for(int i = 0;i < num;i++){
		cout<<"H";
	}
}
void pushV(int num){
	for(int i = 0;i < num;i++){
		cout<<"Hello World"<<endl;
	}
}
void ulang(int kali){
	for(int j = 0;j < kali;j++){
		for(int i = 0; i < 30;i++){
			system("cls");
			pushH(i);
			cout<<"Hello World";
			Sleep(100);
		}
	}
}
void ulangv(int kali){
	for(int j = 0;j < kali;j++){
		for(int i = 0; i < 30;i++){
			system("cls");
			pushV(i);
			cout<<"Hello World";
			Sleep(100);
		}
	}
}
int main(){
		for(int i = 0; i = (i+1)%2;i++){
			ulang(i);
			if(getchar())
				ulangv(i);
		}
}

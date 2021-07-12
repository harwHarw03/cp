#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char A[1000];
	char B[1000];
	cin>>A>>B;
	int a = strlen(A);
	int b = strlen(B);
	int hsl = 0;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			hsl = hsl + (A[i]*B[j]);
		}
	}
	cout<<hsl;
}

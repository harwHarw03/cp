#include<iostream>
using namespace std;
void tulis(int n, int N,int catat[]){
	if(n>=N){
		for(int i=0;i<N;i++){
			cout<<catat[i];
		}
		cout<<endl;
	} else{
		for (int i = 1; i <= N; i++) {
			if (!pernah[i]) { 
				pernah[i] = true; 
				catat[kedalaman] = i; 
				tulis(kedalaman + 1);
				pernah[i] = false; 
			}
	}
}
int main(){
	int data[]={};
	int x;
	int y;
	cin>>x;
	cin>>y;
	int hasil = tulis(x, y);
	
	cout<<hasil
;}

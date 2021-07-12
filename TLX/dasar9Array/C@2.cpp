#include<bits/stdc++.h>
using namespace std;
void Rmodus(int a[], int n){
	int m[100];
	int d = 1;
	for(int i = 0; i < n; i++){
		if(a[i] == a[d]){
			
		}
		d++;
	}
	cout<<"modus = "<<modus;
}
int main(){
	int N;
	cin>>N;
	int data[N];
	for(int i = 0; i < N; i++){
		cin>>data[i];
	}
	int l = sizeof(data)/sizeof(data[0]);
	Rmodus(data, l);
	
	return 0;
}

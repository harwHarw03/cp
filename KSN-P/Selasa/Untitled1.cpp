#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float bagi(int data[], int length, int pembagi){

	int i;
	for(i = 0;i<length;i++){
		data[i]/pembagi;
	}
	return data[i]/pembagi;
}
int print(int data[], int length){
	int i;
	for(i = 0;i<length;i++){
		cout<<data[i]<<endl;
	}
}
int main(){
	int N,n,l;
	int a[N];
	
	cin>>N;
	for(int i = 0; i < N; i++){
		cin>>a[i];
	}
	cout<<"Dibagi : ";cin>>n;
	
	l = sizeof(a)/sizeof(a[0]);
	sort(a, a+l);
	bagi(a, l, n);
	print(a, l);
	
	return 0;
}

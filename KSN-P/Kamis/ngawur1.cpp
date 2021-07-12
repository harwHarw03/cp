#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	int a[n];
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b = sizeof(a)/sizeof(a[0]);
	
	sort(a,a+b);
	for(int i=0;i<b;i++){
		cout<<a[i];
	}
}

#include<iostream>
using namespace std;
int main(){
int n,a;
	cin>>n>>a;
	
	for(int i = 1;i <= n;i++)
	{
		 int b = i % a;
		 if(b == 0)
		 {
		 	cout<<"*"<<" ";
		 } else if(b != 0)
		 {
		 	cout<<i<<" ";
		 } else if(i == n)
		 {
		 	cout<<endl;
		 }
	}	
	}


#include<bits/stdc++.h>
using namespace std;

int data[1001],k=0,n;
int potongKayu(){
	int awal = 0,pot = 1001;
	for(int i = 0;i < n;i++){
		if(pot >=data[i] && data[i] != 0)pot = data[i];
		if(data[i] != 0)awal++;
	}
	if(awal != 0)cout<<awal<<endl;
	return 0;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data[i];
	}
	int pot =100;
	for(int i = 0;i < n;i++){
		pot = potongKayu();
		for(int j = 0;j<n;j++)if(data[j] !=0)data[i] = pot;
	}
}

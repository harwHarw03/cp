#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	return(a > b) ? a : b;
}
int cobaknapsack(int kapasitas,int berat[], int nilai[], int n){
	if(n == 0 || berat == 0)
		return 0;
	if(berat[n-1] > kapasitas)
		return cobaknapsack(kapasitas, berat, nilai, n-1);
	else 
		return max(
		nilai[n-1] + cobaknapsack(kapasitas - berat[n-1], berat,nilai,n-1),cobaknapsack(kapasitas,berat,nilai,n-1));
}
int main(int argc, char** argv){
	int nilai[] = {100,200,300};
	int berat[] = {50,20,30};
	int kapasitas = 100;
	int n = sizeof(nilai)/sizeof(nilai[0]);
	cout<<cobaknapsack(kapasitas,berat,nilai,n);
	return 0;
}

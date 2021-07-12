#include<iostream>
using namespace std;
void greedy(int s[], int f[], int n){
	int i,j;
	cout<<"Aktivitas maksimal : ";
	
	i=0;

	for(j=1;j<n;j++){
		if(s[j] >= f[i]){
			cout<<j;
			i=j;
		}
	}
}
int main(int argc, char**argv){
	int s[] = {1,2,5,6,9,10,11,13};
	int f[] = {7,6,7,9,12,12,15,14};
	int n = sizeof(s)/sizeof(s[0]);
	
	greedy(s,f,n);
	return 0;
}

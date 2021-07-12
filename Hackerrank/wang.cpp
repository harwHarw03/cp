#include<bits/stdc++.h>
using namespace std;

int pecahan[] = {1,2,5,10,20,50,100};
int n = sizeof(pecahan)/sizeof(pecahan[0]);

void cariMin(int v){
	vector<int> ans;
	for(int i = n-1;i >= 0;i--){
		while(v>=pecahan[i]){
			v -= pecahan[i];
			ans.push_back(pecahan[i]);
		}
	}
	cout<<ans.size()<<endl;
//	for(int i = 0;i < ans.size();i++)
//		cout<<ans[i]<<" ";
}
int main(){
	int T;
	cin>>T;
	int R[10];
	for(int i = 0; i < T; i++){
		cin>>R[i];
	}
	for(int i = 0; i < T; i++){
		cariMin(R[i]);
	}
	
	return 0;
}

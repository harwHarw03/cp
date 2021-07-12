#include<bits/stdc++.h>
using namespace std;

int pecahan[] = {1,5,10,20,100};
int n = sizeof(pecahan)/sizeof(pecahan[0]);

void cariMin(int v){
	//vektor adalah suatu class template bagian dr STL (Standar Template pengganti array
	vector<int> ans;
	for(int i = n-1;i >= 0;i--){
		while(v>=pecahan[i]){
			v -= pecahan[i];
			ans.push_back(pecahan[i]);
		}
	}
	cout<<ans.size();
}
int main(){
	int n;
	cin>>n;
	cariMin(n);
	return 0;
}

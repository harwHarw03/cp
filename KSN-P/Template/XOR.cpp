#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, a, b;
	cin>>t;
	for(int i = 0; i < t; i++){
		cin>>a>>b;
		int x = a^b;
		cout<<x<<"\n";
	}
}

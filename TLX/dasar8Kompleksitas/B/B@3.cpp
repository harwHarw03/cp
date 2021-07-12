#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,n;
	bool prima;
	cin>>a;
	for(int i = 0; i < a; i++){
		cin>>n;
		
		if(n == 1)
			prima = false;
		else if(n == 2)
			prima = true;
			
		int dflt = 2;
		while(dflt < n){
			if(dflt % 2 == 0){
				prima = false;
			} else{
				prima = true;
			}
		}
		if(prima){
			cout<<"Ya"<<endl;
		} else{
			cout<<"Bukan"<<endl;
		}
	}
}

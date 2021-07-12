#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int a = -1;
	
	for(int i = 0;i < N;i++){
		for(int k = 0;k <= i;k++){
			a = a + 1;
			if(a == 10){
				a = 0;
			} cout<<a;
		}
		cout<<endl;
	}
}

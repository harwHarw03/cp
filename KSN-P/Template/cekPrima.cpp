#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, b, d;
	cin>>a;
	for(int i = 0; i < a; i++){
		cin>>b;
		for(int j = 2; j <= trunc(sqrt(b)); j++){
			if(b % j ==0){
				d = 1;
			}
		}
		if(d || b == 1){
			d = 0;
			cout<<"BUKAN"<<endl;
		} else{
			cout<<"YA"<<endl;
		}
	}
}

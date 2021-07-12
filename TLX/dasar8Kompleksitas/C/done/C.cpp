#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int a, b, c3k, t3s, bt5;
	cin>>a;
	for(int i = 0; i < a; i++){
		cin>>b;
		c3k = 0;
		t3s = 3;
		bt5 = trunc(b/2);
		if(b % 2 == 0 && b != 2 || b == 1){
			c3k++;
		}
		while(t3s <= bt5){
			if(b % t3s == 0){
				c3k++;
				if(c3k > 2){
					break;
				}
			}
			t3s++;
		}
		if(c3k >2){
			cout<<"BUKAN"<<endl;
		} else{
			cout<<"YA"<<endl;
		}
	}
}

#include <iostream>
using namespace std;

int check1(int a){
	if (a <= 100 && a >= 0) return true;
	else return false;
}

int check(int n){
	if (check1(n)) return false;
	else return true;
}

int main(){
	short N;
	cin >> N;
	if (check(N)) cout << "TIDAK";
	else cout << "YA";
		
}

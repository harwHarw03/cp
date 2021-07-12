#include <iostream>
using namespace std;

int main(){
	float bilangan, pangkat, hasil;
	
	bilangan = 2;
	cin >> pangkat;
	hasil = 1;
	
	for (int i = 0; i < pangkat; i++){
		hasil *= bilangan;
	}
	
	cout << hasil;
}

#include <iostream>
using namespace std;
void pangkat(int a, int b, int &hasil){
	hasil = 1;
	for(int i = 0; i < b; i++){
		hasil *= a;
	}
	
}

int main(){
	int a, b;
	a = 2; b = 3;
	int hasil;
	pangkat(a, b, hasil);
	cout<<hasil<<endl;
}
//   -_^

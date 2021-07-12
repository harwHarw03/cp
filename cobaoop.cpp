#include <iostream>

using namespace std;

class count {
	public:
		void kali2 ( int x ) { cout << x * 2 << endl; };
		void kali3 (int x);
};

void count::kali3(int x){
	cout << x * 3;
}

int main (){
	count hitung;
	hitung.kali2(2);
	hitung.kali3(2);
}

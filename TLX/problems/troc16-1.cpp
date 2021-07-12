#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	for (int i = N/2; i >= 1; i--){
		if (N % i == 0){
			cout << i << " " << N/i; 
			break;
		}
	}
	
}

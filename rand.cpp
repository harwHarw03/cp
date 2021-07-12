#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	srand(time(0));
	for (int i = 0; i < 10; i++){
		cout << rand() % 10 << endl;
		cout << rand() % 100 << endl;
	}
}

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	srand (time(NULL));
	
	int N, num;
	cin >> N;
	
	for (;;){
	num = rand() % 1000;
		if (N % num == N){
			cout << num;
			break;
		} 
	}
	
}

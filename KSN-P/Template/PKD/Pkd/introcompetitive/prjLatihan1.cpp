#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	long long N;
	cin >> N;
	int divisorCount =0;
	for (long long i =1; i <=N; i++){
		if (N % i == 0){
			divisorCount ++;
		}			
	}
	
	if ( divisorCount % 2 ==0){
		cout <<"lampu mati" << endl;
	} else {
		cout <<"lampu menyala" << endl;
	}
		return 0;
}

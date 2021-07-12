#include<cstdio>
using namespace std;
int main(){
	int N;
	scanf("%d", &N);
	int T;
	T = N%2;
	if(T>-1){
		if(T<1){
			if(N>0){
				printf("%d", N);
			}
		}
	}
}

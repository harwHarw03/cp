#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int N, n, a;
	a = 0;
	int b = 0;
	
	for(int i = 0;i < N;i++){
		scanf("%d", &n);
		if(a < n){
			a = n;
		} else {
			b = n;
		}
	}
	printf("%d %d", &a, &b);
	
	return 0;
}

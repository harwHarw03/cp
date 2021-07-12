#include<cstdio>

int main(){
	int N,n,a,b,maks;
	
	scanf("%d", &N);
	
	a = 0;
	
	for(int i=1;i<=N;i++){
		scanf("%d", &n);
		a = a + n;
	}
	printf("%d\n", a);
}

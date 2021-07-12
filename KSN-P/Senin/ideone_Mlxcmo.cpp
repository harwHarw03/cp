#include<cstdio>
using namespace std;
int main(){
	int N;
	printf("Masukkan angka positif genap atau ganjil 1-1000\n");
	while(scanf("%d", &N) !=EOF){	
		if(N>0){	
			int a = N % 2;
			int c = N-1;
			int b = N*c;
			if(a==0)
				printf("%d adalah genap", N);
		else
			printf("%d x %d adalah %d(genap)", c, N, b);
		}
	}
}

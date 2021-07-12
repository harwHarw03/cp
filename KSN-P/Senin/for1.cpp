#include<cstdio>

int main(){
	int N,n,a,b,maks;
	printf("Masukkan angka : ");
	scanf("%d", &N);
	
	a = 0;
	printf("Masukkan angka setiap kali enter sebanyak %d kali \n", N);
	for(int i=1;i<=N;i++){
		scanf("%d", &n);
		a = a + n;
	}
	printf("\n");
	printf("Jumlah semua angka yang anda maskkan : ");
	printf("%d\n", a);
}

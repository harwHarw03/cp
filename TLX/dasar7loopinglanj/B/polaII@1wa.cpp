#include<cstdio>
int main(){
	int N;
	scanf("%d", &N);
	
	for(int i = 0;i < N;i++){
		for(int j = N;j > i;j--){
			printf(" ");
		}
		for(int k = 0;k <= i;k++){
			printf("*");
		}
		printf("\n");
	}
}

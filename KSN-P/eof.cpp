#include<cstdio>
int main(){
	int n;
	int total = 0;
	
	while(scanf("%d", &n) != EOF){
		total +=n;
		printf("%d", total);
	}
}

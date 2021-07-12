#include<cstdio>

int main(){
	int AB,a,b,s;
	
	scanf("%d", &AB);
	
	for(int i = 0;i <= AB;i++){
		for(int j = 0;j <= AB;j++){
			s = i +j;
			if(s = AB){
				printf("%d %d", i,j);
			} else{
				continue;
			}
		}
	}
}

#include<cstdio>
#include<cmath>

using namespace std;
int main(){
	float a;
	scanf("%f", &a);
	int b,c;
	b = floor(a);
	c = ceil(a);
	
	printf("%d %d", b,c);
	return 0;	
}

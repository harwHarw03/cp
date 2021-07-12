#include<iostream>
using namespace std;

int janji(int p, int q, int t) {
  if (p == q) {
    return t;
  } else if (t % 2 == 1) {
    return 2 + janji(p + 1, q, t + 1);
  } else {
    return 2 + janji(p, q - 1, t + 1);
  }
}
int main(){
	int a,b,c;
	a=10;
	b=8;
	c=0;
	
	janji(10,8,0);
}

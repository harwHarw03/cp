#include <iostream>
using namespace std;
int fpb(int m, int n, int o){
	if(n == 0 || o == 0)
		return m;
	else
		return fpb(n, m % n, o % n);
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int FPB = fpb(a, b, c);
	cout<<FPB;
}

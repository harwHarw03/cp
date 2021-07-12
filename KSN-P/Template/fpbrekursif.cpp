#include <bits/stdc++.h>
using namespace std;

int fpb(int m, int n){ 
	if(n == 0)
		return m;
	else
		return fpb(n, m % n); //rekursif
}
int main(){
	int a, b;
	cout << "Angka 1 :";cin >> a;
	cout << "Angka 2 :";cin >> b;
	int FPB = fpb(a, b);
	cout << "FPB = " << FPB << endl;
}

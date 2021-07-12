#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"Masukkan 2 angka yang ingin di tukar :"<<endl;
	cout<<"A : ";
	cin>>a;
	cout<<"B : ";
	cin>>b;	
	//swap hanya dg dua variabel
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("Sekarang A = %d , B = %d", a, b);
}

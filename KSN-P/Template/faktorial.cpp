#include <iostream>
using namespace std;
unsigned long long faktorial(unsigned long long bil){
	if(bil == 0){
		return 1;
	} else{
		return (bil*faktorial(bil-1));
	}
}
int main(){
	unsigned long long a;
	cout<<"Faktorial dari : ";cin>>a;
	unsigned long long hasil = faktorial(a);
	cout<<"Adalah "<<hasil<<endl;
	
	return 0;
}

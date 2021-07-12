//cari karakter ke....
#include <iostream>
#include <string>
using namespace std;

int main() {
	int x;	
	string myString;
	
	cout<<"Input String : ";
	cin>>myString;
	cout<<"//cari karakter ke :";
	cin>>x;
	cout<<"Karakter :";
	cout << myString[x]<<endl;

	return 0;
}

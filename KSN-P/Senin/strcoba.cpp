#include <iostream>
#include <string>
using namespace std;

int main() {
	int x;	
	string myString;
	cout<<"Masukan String : ";
	cin>>myString;
	
	system("cls");
	cout<<"Karakter ke : ";cin>>x;
	cout <<"adalah ===> "<< myString[x]<<endl;
	cout<<"dari string "<<"( "<<myString<<" )";
	return 0;
}

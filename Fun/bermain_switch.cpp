#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	cin>>a;
	
	switch (a){
		case "hi":
			cout<<"satu"<<endl;
			break;
		case "hai":
			cout<<"dua"<<endl;
			break;
		default:
			cout<<"memori tidak cukup"<<endl;
			break;
	}
	
}

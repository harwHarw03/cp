#include <iostream>
#include <string>
using namespace std;

int main(){
	string perintah;
	
	getline (cin, perintah);
	string halo = "halo";
	if(perintah == halo)
		cout<<"halo too"<<endl;
}

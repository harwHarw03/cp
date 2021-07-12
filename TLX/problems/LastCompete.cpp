#include <iostream>
#include <string>
using namespace std;
int main(){
	string x = "O";
	string myString;
	cin>>myString;
	int here = 0;
	int l = myString.length();
	for(int i = 0; i < l; i++){
		if(x[0] == myString[i])
			here = here + 1;
	}
	if(here == 0){
		cout<<"Tidak"<<endl;
	} else{
		cout<<"Ya"<<endl;
	}
}

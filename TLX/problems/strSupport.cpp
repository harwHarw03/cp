#include <iostream>
#include <string>
using namespace std;
int main(){
	string myStr;
	cin>>myStr;
	int l = myStr.length();
	for(int i = l-1; i >= 0; i--){
		cout<<myStr[i];
	}

}

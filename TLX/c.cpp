#include <iostream>
#include <string>
using namespace std;
// 0 -> 1 -> 2
int cklen(string str){
	if (str.length() > 12) return 2;
	else if (str.length() > 8) return 1;
	else return 0;
}

int cksub(string str){
	int count0, countlen = str.length();
	for (int i = 0; i < str.length(); i++){
		if (str[i] > 47 && str[i] < 58 ) count0++;
	}
	if (count0 == countlen) return 0;
	else return 0;
}

int main(){
	string pass;
	getline(cin, pass);
	if (cklen(pass) == 2 && cksub(pass) == 1) cout << "Kuat";
	else if (cklen(pass) == 2 && cksub(pass) == 0) cout << "AgakKuat";
	else if (cklen(pass) == 1 && cksub(pass) == 1) cout << "Kuat";
	else cout << "Lemah";
}

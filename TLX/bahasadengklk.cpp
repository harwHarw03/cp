#include <bits/stdc++.h>
using namespace std;
int main(){
	//A - Z = 65 - 90
	//a - z = 97 - 122
	string str;
	cin >> str;
	for (int i = 0; i <= str.length();i++){
		if (str[i] < 123 && str[i] > 96) str[i] = 64 + (str[i] - 96);
		else if (str[i] < 91 && str[i] > 64) str[i] = 96 + (str[i] - 64);
		else continue;
	}
	cout << str;
}

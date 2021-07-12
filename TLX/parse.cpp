#include <bits/stdc++.h>

using namespace std;

int main(){
	string str1, str2;
	cin >> str1 >> str2;
	
	int len1 = str1.length(), len2 = str2.length();
	
	while ((str1.find(str2) < len1) && str1.find(str2) >= 0){
		str1.erase(str1.find(str2), len2);
	}
	cout << str1;
}

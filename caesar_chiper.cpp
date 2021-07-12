#include <bits/stdc++.h>
using namespace std;
int main() {
	char str[100];
	short key;
	cin >> str >> key;

	for (int i = 0; i < strlen(str); i++){
		str[i] += key;
	}
	cout << str;
	
	return 0;
}

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* arg[]){
	cout << "What is your favorite game?" << endl;
	
	string name {};
	cin >> name;
	
	cout << "You said your favorite game is: " << name << endl;
	
	return 0;
}



#include <iostream>

using namespace std;

int main ()
{
	int n, b;
	
	int temp = 0;
	
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		cin >> b;
		temp = temp + b;	
	}
	
	cout << temp << endl;
}

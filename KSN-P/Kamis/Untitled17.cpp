#include <iostream>

using namespace std;

int main()
{
	int n, arr[105];
	
	n = 0;
	
	while(scanf("%d", &arr[n]) != EOF)
	{
		n++;
	}
	
	n--;
	
	while (n>=0)
	{
		cout << arr[n] << endl;
		n--;
	}	
}

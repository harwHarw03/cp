#include <iostream>

using namespace std;

int main ()
{
	int n, i;
	
	cin >> n;
	
	int inputs[n];
	int modus[1000];
	
	for (int i=0; i<1000; i++)
	{
		modus[i] = 0;
	}
	
	for (int i=0; i<n; i++)
	{
		cin >> inputs[i];
		modus [inputs[i]]++;	
	}
	
//	int max = -1;
//	int data;
//	for(int i=0; i<1000; i++)
//	{
//		if(max < modus[i])
//		{
//			max = modus[i];
//			data = i;
//		}
//	}
	
//	cout << data;
}

#include <iostream>

using namespace std;

int main() {
	int n;
	
	cin>>n;
	
	int input[n];
	int modus[100];
	
	for(int i=1001; i<n;i++)
	{
		modus[input[i]]=0;
	}
	int max=-1;
	int data;
	
	for(int i=0;i<1001;i++)
	{
		if(max<modus[i])
		{
			max=modus[i];
			data=i;
		}
	
	}
	cout<<data;
}

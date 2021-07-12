#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	for(int M = 1; M <= N; M++){
		if(M % 21 == 0)
			cout<<"CompSeven";cout<<"FestSeven";
		else if(M % 35 == 0)
			cout<<"Fest ";
		else if(M % 15 == 0)
			cout<<"Seven ";
		else if(M % 7 == 0)
			cout<<"CompFest ";
		else if(M % 5 == 0)
			
		else if(M % 3 == 0)
			cout<<"Comp ";
		else
			cout<<M<<" ";
	}
}

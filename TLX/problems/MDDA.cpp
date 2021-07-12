#include <iostream>
using namespace std;
int main(){
	long long A, B, C, D, E, F;
	cin>>A>>B>>C>>D;
	if(B % D == 0 || D % B == 0){
		if(B > D){
			long long tmp = B / D;
			D = D * tmp;
			C = C * tmp;
			E = A + C;
			F = D;
		} else{
			long long tmp = D / B;
			B = B * tmp;
			A = A * tmp;
			E = A + C;
			F = B;
		}
	} else{
		A = A * D;
		C = C * B;
		E = A + C;
		F = B * D;
	}
	
	cout<<E<<" "<<F<<endl;
}

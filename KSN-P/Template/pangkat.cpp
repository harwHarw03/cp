#include <iostream>
using namespace std;
int pangkat(int a, int b){
	int hasil = 1;
	for(int i = 0; i < b; i++){
		hasil *= a;
	}
	return hasil;
}
int main(){
	int x, y;
	cin>>x>>y;
	int res = pangkat(x, y);
	cout<<res<<endl;
}

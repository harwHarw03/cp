#include <iostream>
#include <cstring>
using namespace std;
void cek(char a, char b, int l){
	int idx = 0;
	int same = 0;
	for(int i = 0; i < l; i++){
		if(b[i] = a[idx]){
			same = same + 1;
		} else{
			idx++;
		}
	}
	return same;
}
int main(){
	string x, y;
	cin>>x>>y;
	int len1 = strlen(x);
	int len2 = strlen(y);
	if(len2 == len1){
		cek(x, y, len1);
	} else{
		cout<<"Bukan"<<endl;
	}
	if(same == len1){
		cout<<Ya<<endl;
	} else{
		cout<<"Bukan"<<endl;
	}
	
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
struct buah{
	char nama[10];
	int jml;
}fruit[10];

/*struct buah_grup{
	struct buah fruit;
}group[10];
*/

int main(){
	int P, Q;
	cin>>P;
	for(int i = 0; i < P; i++){
		cin>>fruit[i].nama;
		cin>>fruit[i].jml;
	}
	cin>>Q;
	char T;
	for(int i = 0; i < Q; i++){
		cin>>T;
		for(int j = 0; j < P; j++){
			if(T = fruit[j].nama){
				cout<<fruit[j].jml;
			}
		}
	}
}

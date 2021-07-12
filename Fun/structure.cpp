#include <iostream>
using namespace std;
struct kelas{
	int atas;
	int data[5];
}T[3];
int main(){
	int x, y;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			cin>>T[i].data[j];
		}
	}
	cout<<" X, Y"<<endl;
	cin>>x>>y;
	cout<<T[2].data[2];
}

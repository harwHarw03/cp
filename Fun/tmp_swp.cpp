#include <iostream>
using namespace std;
int main(){
	int nilai_1 = 3, nilai_2 = 2;
	int temp = nilai_1;
	nilai_1 = nilai_2;
	nilai_2 = temp;
	
	cout<<nilai_1<<"\n"<<nilai_2;
}

#include <iostream>
#include <conio.h>
using namespace std;

class main_page{
	public:
		void print(){
			cout<<"Hello Cosmos\n";
		}
		void loop();
};

void main_page::loop(){
	for(int i = 0; i < 5; i++){
		cout<<"Hello Cosmos\n";
	}
}

int main(){
	main_page mp;
	mp.print();
	cout<<endl;
	mp.loop();
}

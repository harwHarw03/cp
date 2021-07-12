#include<iostream>//program meng-input sampe pegel
using namespace std;
int main(){

	cout<<"_____Burung Beo_____"<<endl;
	cout<<"Ketik beberapa string"<<endl;
	cout<<" ____lalu Enter_____"<<endl;
	cout<<endl<<endl;

	cout<<cin.rdbuf();
	//atau bisa dangan cara :
/*	char input[100];
	while(scanf("%s", input) != EOF){
		printf("%s", input);
	}	*/
}

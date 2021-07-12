#include<iostream>//program meng-input sampe pegel
using namespace std;
int main(){
//	cout<<cin.rdbuf();
	
	//atau bisa dangan cara :
	char input[100];
	while(scanf("%s", input) != EOF){
		printf("%s\n", input);
	}	
}

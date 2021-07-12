#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	int total = 0;
	cout<<"W3Lc0me T0 1nfiNit9 InPut5 put an integer"<<endl;
	while(scanf("%d", &n) != EOF){
		system("cls");
		cout<<"W3Lc0me T0 1nfiNit9 InPut5 put (space) then integer"<<endl;
		cout<<"atau Ketik 3507 untuk mengakhiri:"<<endl;
		total +=n;
		printf("%d\n", total);

		if(n==3507)
			break;
		getch();
	}
}

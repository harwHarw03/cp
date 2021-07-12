#include <iostream>
#include <windows.h>
using namespace std;

void pushX(int num){
    for(int i=0;i<num;i++)
        cout<<"O";
}
int main() {
    for(int j=0;j<168;j++){
        system("CLS");
        pushX(j);
        cout<<".";
        Sleep(100);
        if(j == 49){
        	j = 0;
		}
    }

}

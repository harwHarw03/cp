#include<iostream>
#include<string>
using namespace std;
char s[100];
string o;
int main(){
	cin>>s;
	o = "o";
	int a = s % o;
	
	if(a = 0){
		cout<<"Ya"<<endl;
	} else{
		cout<<"Tidak"<<endl;
	}
}

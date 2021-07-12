#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class menu_list{
	public:
		void list_buku();
		void daftar_baca();
		void daftar_terbaca();	
};
//fungsi------------------------------------------
void menu_list::list_buku(){
	
}

void menu_list::daftar_baca(){
	
}

void menu_list::daftar_terbaca(){
	
}
//------------------------------------------------
int main(){
	menu_list menu;
	while(!cin.eof()){
		int number;
		cout<<"choose an option 1, 2, or 3 :\n1. List Buku\n2. Daftar Baca\n3. Daftar Terbaca"<<endl;
		cout<<"or 0 to refresh\n\n\n";
		
		cout<<"command bar:"<<endl;
		cout<<"           ";cin>>number;
		
		switch (number) {
			case 0:
				system("cls");
				break;
			case 1:
				menu.list_buku();
				break;
			case 2:
				menu.daftar_baca();
				break;
			case 3:
				menu.daftar_terbaca();
				break;
			default:
				cout<<"you can only input 0, 1, 2, and 3!";
				system("cls");
		}
	}	
}

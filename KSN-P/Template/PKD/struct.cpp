#include<iostream>
using namespace std;
int main(){
	
	
	struct data{ //pembuatan tipe data
		char nama[100];
		int nilai;
	};
	
	data nilaiuh;//inisialisasi
	
	cout<<"Peserta UH: ";
	cin>>nilaiuh.nama;
	cout<<"Nilai UH: ";
	cin>>nilaiuh.nilai;
	
//	data nilaikuis;
	
//	cout<<"Peserta Kuis: ";
//	cin>>nilaiuh.nama;
//	cout<<"Nilai Kuis: ";
//	cin>>nilaiuh.nilai;
	
	cout<<"Nilai UH & kuis :"<<endl;
	cout<<nilaiuh.nama<<" : "<<nilaiuh.nilai<<endl;
//	cout<<nilaikuis.nama<<" : "<<nilaikuis.nilai;
}

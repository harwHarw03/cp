#include<iostream>
using namespace std;

int nilai_UTS,nilai_UAS,rata_kuis,nilai_akhir;

void nilai_akhir(nilai_UTS,nilai_UAS,rata_kuis);
void nilai(nilai_UTS,nilai_UAS,rata_kuis){
	nilai_akhir = (nilai_UTS*35/100) + (nilai_UAS*35/100) + rata_kuis*30/100;
}
int main(){
	cout<<"UTS :";cin>>nilai_UTS>>;cout<<"UAS:";cin>>nilai_UAS;cout<<"KUIS:">>rata_kuis;
	cout<<nilai_akhir;
}



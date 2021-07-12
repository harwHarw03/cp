#include <iostream>

using namespace std;

double nilai_akhir;
void hitungNilai (double uts, double uas, double kuis)
{
	nilai_akhir = (35/100 * uts)+ (35/100 * uas)+(30/100 * kuis);
	
}

int main ()
{
    
    double nilaiUTS, nilaiUAS, nilaiKuis;
    double nilaiAkhir;
    
  	cout<<"Masukkan Nilai UTS: "; 
  	cin>>nilaiUTS;
  	cout<<"Masukkan Nilai UAS: "; 
  	cin>>nilaiUAS;
  	cout<<"Masukkan Nilai Kuis: "; 
	cin>>nilaiKuis;
  	
  	nilaiAkhir = hitungNilai(nilaiUTS, nilaiUAS, nilaiKuis);
  	cout<<nilaiAkhir

return 0;
}

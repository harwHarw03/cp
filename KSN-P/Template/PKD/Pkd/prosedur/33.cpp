#include <iostream>

using namespace std;

void Kali2(int X) {
  X = X * 2;
  cout<<"Nilai di dalam procedure: "<<X<<endl;
}

int main() {
  int Bilangan;

  cout<<"Masukkan sebuah bilangan bulat: ";
  cin>>Bilangan;
  cout<<endl;

  // Menampilkan nilai awal
  cout<<"Nilai awal: "<<Bilangan<<endl;

  // Memanggil fungsi Kali2
  Kali2(Bilangan);

  // Menampilkan nilai akhir
  cout<<"Nilai akhir: "<<Bilangan<<endl;

  return 0;
}


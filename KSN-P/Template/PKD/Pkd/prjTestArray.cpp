#include <iostream>
using namespace std;
int main ()
{ // Kamus
int TabInt[10]; int i;
// Algoritma mengisi array
for (i=0; i<10; i++) {
	TabInt[i]=i*5;
}
// Algoritma  membaca dan menuliskan // isi array ke layar
for (i=0; i<10; i++) {
	cout << TabInt[i] << endl;
}
return 0;
};


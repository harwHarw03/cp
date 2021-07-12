#include <iostream>
using namespace std;
int main ()
{ // Kamus
int X, i; bool found;
int TabInt[10] = {1,2,3,5,44,6,7,23,43,11};
// Algoritma Pengisian data: asumsi array terisi
cin >> X; 
i = 0; found = false;
while ((i < 10) && (!found)) {
       if (TabInt[i]==X) {
           found = true;
       } else {
            i++;
}
} // i = 10 atau found
if (found) { // X ada di
       cout << X << " ada di indeks " << i; 
} else { 
       cout << X << " tidak ditemukan";
}
return 0;
}


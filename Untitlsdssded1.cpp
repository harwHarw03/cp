#include <iostream>
using namespace std;

int main () {
	struct {
		int a;
	}main[3];
}
/*
	#include <iostream>
	int main(){
    char str[] = "Ujian Mid 2021 sukses!";
    int str_length = sizeof(str)/sizeof(str[0]);
    for(int i=10; i<str_length;i++){
       std::cout<<str[i];
    }
    return 0;
}
	
	/*int n = 10;
	for (int i = 0, j = 0; i < n, j < n; i++, j += 5){
		cout << i << endl << j << endl;
	}*/
/*#include <iostream>
#include <string>
using namespace std;
struct twaktu{
    int jam, menit, detik;
};
struct tPeserta {
    int no_peserta;
    string nama;
    twaktu waktu[2];
};
int main()
{
    tPeserta A;
    tPeserta * ptrA = &A;
    
    cout << "Jam..." <<ptrA->waktu[0].jam;
    cout << ptrA;
}*/

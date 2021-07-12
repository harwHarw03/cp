#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int jabatan(int a, int b) {
  if (b == 0) {
    return 1;
  } else if (b % 2 == 1) {
    return a * jabatan(a, b - 1);
  } else {
    int temp = jabatan(a, b / 2);
    return temp * temp;
  }
}


int main(int argc, char** argv) {
	int hasil;
	hasil = jabatan(2,5);
	cout<<hasil;
	return 0;
}

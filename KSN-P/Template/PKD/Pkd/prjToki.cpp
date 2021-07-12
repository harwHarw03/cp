#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int janji(int p, int q, int t) {
  if (p == q) {
    return t;
  } else if (t % 2 == 1) {
    return 2 + janji(p + 1, q, t + 1);
  } else {
    return 2 + janji(p, q - 1, t + 1);
  }
}

int main(int argc, char** argv) {
	int hasil;
	hasil = janji (10,8,0);
	cout << hasil;
	return 0;
}

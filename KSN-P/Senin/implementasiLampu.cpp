# include <iostream >
using namespace std ;
int main () {
	long long N;
	cout<<"Tombolnya ada ";
	cin >> N;
	cout<<"Keadaan";
	int divisorCount = 0;
	for ( long long i = 1; i <= N; i ++) {
		if (N % i == 0) {
			divisorCount ++;
		}
	}
	if ( divisorCount % 2 == 0) {
		cout << " lampu ? mati " << endl ;
	} else {
		cout << " lampu ? menyala " << endl ;
	}
}

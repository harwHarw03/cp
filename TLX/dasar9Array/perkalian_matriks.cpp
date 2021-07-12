#include <iostream>
using namespace std;
int main() {
	int N, M, P;
	cin >> N >> M >> P;
	int mrxA[N][M];
	int mrxB[M][P];
	int mrxC[N][P];
	
	//input
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			cin >> mrxA[i][j];
		}
	}
	for (int i = 0; i < M; i++){
		for (int j = 0; j < P; j++){
			cin >> mrxB[i][j];
		}
	}
	
	//perkalian
	for (int i = 0; i < N; i++){
		for (int j = 0; j < P; j++){
			int C = 0;
			for (int k = 0; k < M; k++){
				  C = C + mrxA[i][k] * mrxB[k][j];
			}
			mrxC[i][j] = C;
			C = 0;
		}
	}
	
	//cout
	for (int i = 0; i < N; i++){
		for (int j = 0; j < P; j++){
			cout << mrxC[i][j] << " ";
		}
		cout << endl;
	}
}

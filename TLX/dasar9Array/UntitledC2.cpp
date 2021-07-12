#include <iostream>
using namespace std;
struct frekuensi{
	int arr[] = {};
}F;
int main(){
	int N;
	int nilai[] = {};
	int max = 0;
	cin>>N;
	
	for(int i = 0; i < N; i++){
		cin>>nilai[i];
	}
	int calonModus[] = {};

//Cari Modus
	for(int j = 0; j < N; j++){
		for(int k = 0; k < N; k++){
			if(nilai[j] = nilai[k])
				F.arr[j] = F.arr[j] + 1;
		}
	}
	for(int l = 1; l < N; l++){
		if(F.arr[l] < F.arr[l-1])
			calonModus[l]
	}
}

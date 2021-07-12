#include <iostream>

using namespace std;


int sort(int N, int Array[]){
	int temp = 0;
	for (int i = 0; i < N; i++){
		if (Array[i] > Array[i + 1]){
			temp = Array[i];
			Array[i] = Array[i + 1];
			Array[i + 1] = temp;
		}
	}
	 
}

int prnt(int n, int Array[]){
	for (int i = 0; i < 10; i++){
		cout << Array[i] << " ";
	}
}
int main() {
	int array[10];
	
	for (int i = 0; i < 10; i++){
		cin >> array[i];
	}
	sort(10, array);
	prnt(10, array);
	
}

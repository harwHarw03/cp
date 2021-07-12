#include <iostream>

using namespace std;

int main() {
	int data[7] = {4,3,6,5,1,7,2}; 
	for (int i = 0; i < 7; i++){
		cout<<data[i]<<endl;
	}
	cout<<"Sorted: "<<endl;
	
	int tmp = 0, min = 10, idx = 0;
	
	for (int i = 0; i < 7; i++){ //to find min elemen
		min = i;
		for (int j = i + 1; j < 6; j++){
			if (data[j] < data[min]){
				min = data[j];
				idx = j;
			} 
		}
	}
	for (int i = 0; i < 7; i++){
		cout<<data[i]<<endl;
	}
	
}

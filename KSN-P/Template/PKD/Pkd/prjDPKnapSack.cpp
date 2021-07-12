#include <bits/stdc++.h> 
using namespace std; 
  
int max(int a, int b) { 
	return (a > b) ? a : b; 
} 
int CobaknapSack(int kapasitas, int berat[], int nilai[], int n) 
{ 
    if (n == 0 || berat == 0) 
        return 0;  
    if (berat[n - 1] > kapasitas) 
        return CobaknapSack(kapasitas, berat, nilai, n - 1); 
    else
        return max( 
            nilai[n - 1] + CobaknapSack(kapasitas - berat[n - 1],  
                                    berat, nilai, n - 1), 
            CobaknapSack(kapasitas, berat, nilai, n - 1)); 
} 
int main(int argc, char** argv) {
	int nilai[] = { 60, 100, 120 }; 
    int berat[] = { 10, 20, 30 }; 
    int kapasitas = 50; 
    int n = sizeof(nilai) / sizeof(nilai[0]); 
    cout << CobaknapSack(kapasitas, berat, nilai, n); 
    return 0; 
}

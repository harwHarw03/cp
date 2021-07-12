#include <bits/stdc++.h> 
using namespace std; 
void CetakModus(int a[], int n) 
{ 

    int b[n]; 
    int max = *max_element(a, a + n); 
    int t = max + 1; 
    int hitung[t]; 
    for (int i = 0; i < t; i++) 
        hitung[i] = 0; 
    for (int i = 0; i < n; i++) 
        hitung[a[i]]++;     
    int modus = 0; 
    int k = hitung[0]; 
    for (int i = 1; i < t; i++) { 
        if (hitung[i] > k) { 
            k = hitung[i]; 
            modus = i; 
        } 
    } 
    cout << "Modus = " << modus; 
} 
  

int main() 
{ 
    int a[] = { 1, 2, 3, 2, 3, 4, 5, 6, 7 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    CetakModus(a, n); 
    return 0; 
}

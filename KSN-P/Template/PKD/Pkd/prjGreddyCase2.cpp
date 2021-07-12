#include <bits/stdc++.h> 
using namespace std; 

int pecahan[] = {100, 500, 1000, 2000, 5000, 10000, 20000,50000,100000 }; 
int n = sizeof(pecahan) / sizeof(pecahan[0]); 
  
void cariMin(int V) 
{ 
    //Vector adalah suatu class template bagian dari STL (Standard Template Library) 
	//digunakan untuk menggantikan array
    vector<int> ans;      
    for (int i = n - 1; i >= 0; i--) {      
        while (V >= pecahan[i]) { 
            V -= pecahan[i]; 
            ans.push_back(pecahan[i]); 
        } 
    } 
     
    for (int i = 0; i < ans.size(); i++) 
        cout << ans[i] << "  "; 
} 
  

int main() 
{ 
    int n = 1575500000; 
    cout << "Minimal Pemecahan Uangnya : " << n << ": "; 
    cariMin(n); 
    return 0; 
}

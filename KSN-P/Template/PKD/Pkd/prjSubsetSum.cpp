#include <stdio.h> 
  
bool cekSubsetSum(int data[], int n, int sum) 
{ 
  
    if (sum == 0) 
        return true; 
    if (n == 0 && sum != 0) 
        return false; 
  

    if (data[n - 1] > sum) 
        return cekSubsetSum(data, n - 1, sum); 
  
    return cekSubsetSum(data, n - 1, sum) 
			|| cekSubsetSum(data, n - 1, sum - data[n - 1]); 
} 
int main() 
{ 
    int data[] = { 3, 34, 4, 12, 5, 2, 4, 6, 8, 12, 90, 8, 9, 10, 15, 25 }; 
    int sum = 100; 
    int n = sizeof(data) / sizeof(data[0]); 
    if (cekSubsetSum(data, n, sum) == true) 
        printf("Ditemukan subset yang sesuai SUM"); 
    else
        printf("Tidak ada subset yang sesuai SUM"); 
    return 0; 
} 

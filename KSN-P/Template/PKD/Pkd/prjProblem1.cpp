#include <bits/stdc++.h> 
using namespace std; 
  

double cariMedian(int data[], int n) 
{ 
    sort(data, data+n); 
  
    if (n % 2 != 0) 
       return (double)data[n/2]; 
      
    return (double)(data[(n-1)/2] + data[n/2])/2.0; 
} 
  

int main() 
{ 
      
	
	int data[] = { 10, 3, 4, 2, 7, 5, 8, 6 };
	 
    int n = sizeof(data)/sizeof(data[0]); 

    cout << "Median = " << cariMedian(data, n) << endl;  
    return 0; 
}

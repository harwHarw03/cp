#include <iostream>
void printMaxAktivitas(int s[], int f[], int n) 
{ 
    int i, j; 
  
    printf ("\Akitivtas yang dapat Maksimal  :  ");   
    
    i = 0; 
    //printf("%d ", i);      
    for (j = 1; j < n; j++) 
    { 
      if (s[j] >= f[i]) 
      { 
          printf ("%d ", j); 
          i = j; 
      } 
    } 
} 

int main(int argc, char** argv) {
	
    int s[] =  {1, 2, 5, 8}; 
    int f[] =  {3, 6, 7, 9}; 
    int n = sizeof(s)/sizeof(s[0]); 
    printMaxAktivitas(s, f, n); 
    return 0; 
	

}

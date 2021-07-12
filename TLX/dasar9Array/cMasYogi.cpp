#include <iostream>

using namespace std;

int
main ()
{
    int jml;
    cin>>jml;
    int nilai[jml];
    
    for(int i=0; i< jml; i++){
        cin>>nilai[i];
    }
    //int nilai[6] = { 1, 3, 2, 4, 1, 4 };
    int nilaiMax = 0;
    for (int i = 0; i < jml; i++){
        if (nilai[i] > nilaiMax){
    	  nilaiMax = nilai[i];
    	}
    }
    
    int tFrek[(nilaiMax+1)];
    for(int i = 0; i <= nilaiMax; i++){
        tFrek[i] = 0;
    }
    
    for (int i=0; i < jml; i++) {
        tFrek[nilai[i]]++;
    }
    
    int nilaiModus = 0;
    for(int i = 0; i <= nilaiMax; i++){
        for(int j = 0; j <= nilaiMax; j++){
            if(tFrek[i] < tFrek[j]){
                nilaiModus = j;
            }
        }
    }
    
    cout<<nilaiModus;

    return 0;
}

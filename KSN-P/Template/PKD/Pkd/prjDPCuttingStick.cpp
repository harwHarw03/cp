#include<bits/stdc++.h>
using namespace std;

int data[1001],k = 0,n;
int pot_kayu(){
    int awal = 0,pot = 1001;
    for(int i = 0; i < n; i++){
        if(pot >= data[i] && data[i] != 0)pot = data[i];
        if(data[i] != 0)awal++;
    }
    if(awal != 0)cout << awal << endl;
    return pot;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }
    int pot = 1001;
    for(int i = 0; i < n; i++){
        pot = pot_kayu();
        for(int j = 0; j < n; j++)if(data[j] != 0)data[j]-=pot;
    }
    return 0;
}

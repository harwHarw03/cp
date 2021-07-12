#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int score[t][2];
    
    for(int i = 0; i< t; i++){
        cin>>score[i][0];
        for(int j = 0; j < score[i][0]; j++){
            score[i][1] += (j + 1);
        }
    }
    
    for(int i = 0; i < t; i++){
        cout<<"Case #"<<(i+1)<<": "<<score[i][1]<<"\n";
    }
}

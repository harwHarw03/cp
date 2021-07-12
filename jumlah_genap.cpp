#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#define N 10
#define M 20


using namespace std;


int X[N];


int main()
{
	srand(time(0));
    for (int i = 0; i < N; i++)
    {
        X[i] = rand()%M; //Suatu angka random
    }

	int angka_genap = 0;
	int sum_genap = 0;
    for (int i = 0; i < N; i++)
    {
        cout << X[i] << " ";
        if (X[i] % 2 == 0) {
        	angka_genap += 1;
        	sum_genap += X[i];
		}
		
    }


    cout << endl;
	cout << "Jumlah angka genap : " <<angka_genap;
	cout << "\nTotal angka genap : " <<sum_genap;
    //....................................


    return 0;
}

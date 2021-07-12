#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int data[N];
	for(int i = 0; i < N; i++){
		cin>>data[i];
	}
	int max = *max_element(data, data + N);
	int min = *min_element(data, data + N);
	cout<<min<<" "<<max<<endl;
}

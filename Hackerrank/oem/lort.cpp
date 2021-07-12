#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	string K;
	
	getline(cin, S);
	getline(cin, K);
	
	int S_len = S.length();
	int K_len = K.length();
		
	int count = 0;
	
	if (S_len == K_len){
		cout<<"Same!";
		
		for(int i = 0; i < S_len; i++){
			for(int j = 0; j < S_len; j++){
				if (S[i] == K[j]){
					count += 1;
					break;
				}
			}
			
		}
	} else {
		cout<<"NO";
	}
	if (count == S_len){
		cout<<"YES";
	}
}

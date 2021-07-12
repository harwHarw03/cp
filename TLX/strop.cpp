#include <bits/stdc++.h>
using namespace std;int main(){string s1, s2, s3, s4;cin >> s1 >> s2 >> s3 >> s4;int len1 = s1.length(), len2 = s2.length(), len3 = s3.length();for (int i = 0; i <= len1 - len2; i++){if (s1.substr(i, len2) == s2) {s1 = s1.erase(i, len2);break;}}s1.insert(s1.find(s3) + len3, s4);cout << s1;}

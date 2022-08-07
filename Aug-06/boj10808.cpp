#include <bits/stdc++.h>

using namespace std;

int alpha[26] = {0};
string s;

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> s;
  
  for (int i=0; i<s.size(); i++) alpha[s[i] - 'a']++;
  for (int i=0; i<26; i++) cout << alpha[i] << " ";

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int sum = 0;
int n1[26] = {0}, n2[26] = {0}, res[26] = {0};

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> s1 >> s2;

  for (int i=0; i<s1.size(); i++) n1[s1[i] - 'a']++;
  for (int i=0; i<s2.size(); i++) n2[s2[i] - 'a']++;

  for (int i=0; i<26; i++){
    res[i] = abs(n1[i] - n2[i]);
    sum += res[i];
  }

  cout << sum;
  
  return 0;
}
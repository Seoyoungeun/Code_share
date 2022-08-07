#include <bits/stdc++.h>

using namespace std;

string s;
int n[10] = {0};

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> s;
  
  for (int i=0; i<s.size(); i++) n[s[i] - '0']++;

  int tmp = n[6] + n[9];
  if (tmp % 2 == 1){
    n[6] = tmp / 2 + 1;
    n[9] = tmp / 2;
  } else {
    n[6] = tmp / 2;
    n[9] = tmp / 2;
  }

  cout << *max_element(n, n + 10);

  return 0;
}
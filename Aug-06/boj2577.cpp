#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int n[10] = {0};
string s;

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> a >> b >> c;
  s = to_string(a * b * c);

  for (int i=0; i<s.size(); i++) n[s[i] - '0']++;
  for (int i=0; i<10; i++) cout << n[i] << "\n";

  return 0;
}
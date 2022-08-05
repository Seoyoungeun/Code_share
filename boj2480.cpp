#include <bits/stdc++.h>

using namespace std;

int n[3];

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> n[0] >> n[1] >> n[2];
  sort(n, n + 3);

  if (n[0] == n[1] && n[1] == n[2]) cout << 10000 + n[0] * 1000;
  else if (n[0] != n[1] && n[1] != n[2] && n[2] != n[0]) cout << n[2] * 100;
  else cout << 1000 + n[1] * 100;

  return 0;
}
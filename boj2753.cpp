#include <bits/stdc++.h>

using namespace std;

int y;

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> y;

  if (y % 4 != 0) cout << 0;
  else {
    if (y % 100 != 0 || y % 400 == 0) cout << 1;
    else cout << 0;
  }

  return 0;
}
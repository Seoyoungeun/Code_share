#include <bits/stdc++.h>

using namespace std;

int n, cnt = 0;

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  for (int i=0; i<3; i++){
    cnt = 0;
    for (int j=0; j<4; j++){
      cin >> n;
      if (n == 0) cnt++;
    }
    if (cnt == 0) cout << "E\n";
    else if (cnt == 1) cout << "A\n";
    else if (cnt == 2) cout << "B\n";
    else if (cnt == 3) cout << "C\n";
    else cout << "D\n";
  }

  return 0;
}
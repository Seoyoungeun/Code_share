#include <bits/stdc++.h>

using namespace std;

int num, ind, maxnum = 0, premax;

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  for (int i=0; i<9; i++){
    cin >> num;
    premax = maxnum;
    maxnum = max(num, maxnum);
    if (premax != maxnum) ind = i + 1;
  }

  cout << maxnum << "\n" << ind;

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int card[21];

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  for (int i=1; i<21; i++){
    card[i] = i;
  }

  for (int i=0; i<10; i++){
    int a, b;
    cin >> a >> b;
    reverse(card + a, card + 1 + b);
  }

  for (int i=1; i<21; i++){
    cout << card[i] << ' ';
  }

  return 0;
}
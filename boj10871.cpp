#include <bits/stdc++.h>

using namespace std;

int n, x, num;

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> n >> x;
  while(n--){
    cin >> num;
    if (num < x){
      cout << num << ' ';
    }
  }

  return 0;
}
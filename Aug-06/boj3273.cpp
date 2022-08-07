#include <bits/stdc++.h>

using namespace std;

int n, x, cnt = 0;

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> n;

  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  cin >> x;

  int left = 0, right = v.size() - 1; // 투 포인터

  while (left < right){
    int tmp = v[left] + v[right];
    if (tmp > x) right--;
    else if (tmp < x) left++;
    else {
      cnt++;
      left++;
      right--;
    }
  }

  cout << cnt;

  return 0;
}
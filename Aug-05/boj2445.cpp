#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
  ios_base::sync_with_stdio(0); // scanf 사용시 아래 두 문장 삭제
  cin.tie(0);

  cin >> n;

  for (int i=1; i<=n-1; i++){
    for (int j=1; j<=i; j++) cout << "*";
    for (int j=1; j <= 2*n - 2*i; j++) cout << " ";
    for (int j=1; j<=i; j++) cout << "*";
    cout << "\n";
  }

  for (int i=0; i<2*n; i++) cout << "*";
  cout << "\n";

  for (int i=n-1; i>=1; i--){
    for (int j=i; j>=1; j--) cout << "*";
    for (int j=2*n - 2*i; j >= 1; j--) cout << " ";
    for (int j=i; j>=1; j--) cout << "*";
    cout << "\n";
  }

  return 0;
}
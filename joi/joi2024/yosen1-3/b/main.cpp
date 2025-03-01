// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a;
  cin >> a;
  int b;
  cin >> b;
  int n = a + b;
  int ans = 0;
  while (n > 0) {
    n /= 10;
    ans++;
  }
  cout << ans << endl;
  return 0;
}

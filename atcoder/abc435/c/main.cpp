// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 1;
  bool f = true;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (i > ans) {
      f = false;
    }
    if (f) {
      ans = max(ans, i + a - 1);
    }
  }
  ans = min(ans, n);
  cout << ans << endl;
  return 0;
}

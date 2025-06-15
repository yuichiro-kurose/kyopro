// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> q(n), a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> q[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  int s = 0, ans = 0;
  while (true) {
    bool f = false;
    for (int i = 0; i < n; i++) {
      if (q[i] - a[i] * s < 0) {
        f = true;
      }
    }
    if (f) {
      break;
    }
    int t = inf;
    for (int i = 0; i < n; i++) {
      if (b[i] != 0) {
        t = min(t, (q[i] - a[i] * s) / b[i]);
      }
    }
    ans = max(ans, s + t);
    s++;
  }
  cout << ans << endl;
  return 0;
}

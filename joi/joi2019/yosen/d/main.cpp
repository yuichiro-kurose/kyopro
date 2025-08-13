// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    p[i] = make_pair(a[i], i + 1);
  }
  sort(p.begin(), p.end());
  vector<bool> f(n + 2, true);
  f[0] = false;
  f[n + 1] = false;
  int now = 1, before = inf;
  for (int i = 1; i <= n; i++) {
    if (a[i - 1] == 0) {
      f[i] = false;
      if (f[i - 1] && f[i + 1]) {
        now++;
      }
      if (!f[i - 1] && !f[i + 1]) {
        now--;
      }
    } else {
      before = min(before, a[i - 1]);
    }
  }
  int ans = now;
  for (auto [x, idx] : p) {
    if (x == 0) {
      continue;
    }
    if (x != before) {
      ans = max(ans, now);
    }
    if (f[idx - 1] && f[idx + 1]) {
      now++;
    }
    if (!f[idx - 1] && !f[idx + 1]) {
      now--;
    }
    f[idx] = false;
    before = x;
  }
  ans = max(ans, now);
  cout << ans << endl;
  return 0;
}

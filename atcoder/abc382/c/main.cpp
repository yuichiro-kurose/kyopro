// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i > 0) {
      a[i] = min(a[i], a[i - 1]);
    }
  }
  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;
    int ans = lower_bound(a.begin(), a.end(), b, greater<int>()) - a.begin() + 1;
    if (ans == n + 1) {
      cout << -1 << endl;
    } else {
      cout << ans << endl;
    }
  }
  return 0;
}

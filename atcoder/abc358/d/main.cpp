// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int p = 0;
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= b[p]) {
      ans += a[i];
      p++;
    }
    if (p == m) {
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}

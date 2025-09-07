// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    ans += min(a[i], b[i]);
  }
  while (q--) {
    char c;
    int x, v;
    cin >> c >> x >> v;
    x--;
    ans -= min(a[x], b[x]);
    if (c == 'A') {
      a[x] = v;
    }
    if (c == 'B') {
      b[x] = v;
    }
    ans += min(a[x], b[x]);
    cout << ans << endl;
  }
  return 0;
}

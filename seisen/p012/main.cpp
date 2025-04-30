// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> g(n, 0);
  for (int i = 0; i < n; i++) {
    g[i] |= 1 << i;
  }
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    g[x] |= 1 << y;
    g[y] |= 1 << x;
  }
  int ans = 0;
  for (int i = 0; i < 1 << n; i++) {
    bool f = true;
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        if ((g[j] & i) != i) {
          f = false;
        }
      }
    }
    if (f) {
      ans = max(ans, __builtin_popcount(i));
    }
  }
  cout << ans << endl;
  return 0;
}

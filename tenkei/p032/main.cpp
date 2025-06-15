// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  int m;
  cin >> m;
  vector<set<int>> g(n);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    g[x].insert(y);
    g[y].insert(x);
  }
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    p[i] = i;
  }
  int ans = inf;
  do {
    int now = 0;
    bool f = true;
    for (int i = 0; i < n; i++) {
      if (i > 0 && g[p[i - 1]].count(p[i])) {
        f = false;
      }
      now += a[p[i]][i];
    }
    if (f) {
      ans = min(ans, now);
    }
  } while (next_permutation(p.begin(), p.end()));
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}

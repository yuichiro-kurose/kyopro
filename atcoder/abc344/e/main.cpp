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
  map<int, int> g, h;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i > 0) {
      g[a[i - 1]] = a[i];
      h[a[i]] = a[i - 1];
    }
  }
  g[0] = a[0];
  h[a[0]] = 0;
  g[a[n - 1]] = inf;
  h[inf] = a[n - 1];
  int q;
  cin >> q;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x, y;
      cin >> x >> y;
      g[y] = g[x];
      h[g[x]] = y;
      g[x] = y;
      h[y] = x;
    }
    if (type == 2) {
      int x;
      cin >> x;
      g[h[x]] = g[x];
      h[g[x]] = h[x];
      g.erase(x);
      h.erase(x);
    }
  }
  vector<int> ans;
  map<int, bool> vis;
  auto f = [&](auto f, int u) -> void {
    vis[u] = true;
    if (g[u] != inf && !vis[g[u]]) {
      f(f, g[u]);
    }
    ans.push_back(u);
  };
  for (auto p : g) {
    if (p.first != 0 && !vis[p.first]) {
      f(f, p.first);
    }
  }
  reverse(ans.begin(), ans.end());
  for (int i = 0; i < (int) ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}

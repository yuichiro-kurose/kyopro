// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
  vector<int> par;
  vector<int> siz;
  UnionFind(int n) {
    par = vector<int>(n, -1);
    siz = vector<int>(n, 1);
  }
  int root(int x) {
    if (par[x] < 0) {
      return x;
    }
    return par[x] = root(par[x]);
  }
  void unite(int u, int v) {
    int root_u = root(u);
    int root_v = root(v);
    if (root_u == root_v) {
      return;
    }
    if (siz[root_u] < siz[root_v]) {
      par[root_u] = root_v;
      siz[root_v] += siz[root_u];
    } else {
      par[root_v] = root_u;
      siz[root_u] += siz[root_v];
    }
  }
  bool same(int u, int v) {
    if (root(u) == root(v)) {
      return true;
    }
    return false;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i].first >> y[i].first;
    x[i].second = i;
    y[i].second = i;
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  vector<tuple<int, int, int>> edges;
  for (int i = 0; i < n - 1; i++) {
    edges.push_back(make_tuple(x[i + 1].first - x[i].first, x[i].second, x[i + 1].second));
    edges.push_back(make_tuple(y[i + 1].first - y[i].first, y[i].second, y[i + 1].second));
  }
  sort(edges.begin(), edges.end());
  UnionFind uf(n);
  long long ans = 0;
  for (auto [w, u, v] : edges) {
    if (!uf.same(u, v)) {
      ans += w;
      uf.unite(u, v);
    }
  }
  cout << ans << endl;
  return 0;
}

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
  int v, e;
  cin >> v >> e;
  vector<tuple<int, int, int>> edges(e);
  for (int i = 0; i < e; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    edges[i] = make_tuple(d, s, t);
  }
  sort(edges.begin(), edges.end());
  UnionFind uf(v);
  int ans = 0;
  for (auto [w, u, v] : edges) {
    if (!uf.same(u, v)) {
      uf.unite(u, v);
      ans += w;
    }
  }
  cout << ans << endl;
  return 0;
}

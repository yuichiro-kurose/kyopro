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
  int n, m, k;
  cin >> n >> m >> k;
  vector<tuple<int, int, int>> edges(m);
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    edges[i] = make_tuple(c, a - 1, b - 1);
  }
  sort(edges.begin(), edges.end());
  UnionFind uf(n);
  int ans = 0;
  for (auto tup : edges) {
    if (n == k) {
      break;
    }
    int c = get<0>(tup), a = get<1>(tup), b = get<2>(tup);
    if (uf.same(a, b)) {
      continue;
    }
    uf.unite(a, b);
    ans += c;
    n--;
  }
  cout << ans << endl;
  return 0;
}

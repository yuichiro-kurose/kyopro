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
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }
  vector<long long> ans(m);
  long long cnt = (long long) n * (n - 1) / 2;
  UnionFind uf(n);
  for (int i = m - 1; i >= 0; i--) {
    ans[i] = cnt;
    if (!uf.same(a[i], b[i])) {
      cnt -= (long long) uf.siz[uf.root(a[i])] * uf.siz[uf.root(b[i])];
      uf.unite(a[i], b[i]);
    }
  }
  for (int i = 0; i < m; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}

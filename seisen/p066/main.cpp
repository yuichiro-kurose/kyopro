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
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<double> x(n), y(n), z(n), r(n);
    for (int i = 0; i < n; i++) {
      cin >> x[i] >> y[i] >> z[i] >> r[i];
    }
    vector<tuple<double, int, int>> edges;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        double dist = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2) + pow(z[i] - z[j], 2));
        double l = r[i] + r[j];
        if (dist < l) {
          edges.push_back(make_tuple(0, i, j));
        } else {
          edges.push_back(make_tuple(dist - l, i, j));
        }
      }
    }
    sort(edges.begin(), edges.end());
    UnionFind uf(n);
    double ans = 0;
    for (auto tup : edges) {
      double w = get<0>(tup);
      int u = get<1>(tup), v = get<2>(tup);
      if (!uf.same(u, v)) {
        ans += w;
        uf.unite(u, v);
      }
    }
    cout << fixed << setprecision(3) << ans << endl;
  }
  return 0;
}

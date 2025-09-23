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
};


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  UnionFind uf(n);
  vector<int> cnt(n, 0);
  vector<bool> color(n, false);
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int u, v;
      cin >> u >> v;
      u--;
      v--;
      u = uf.root(u);
      v = uf.root(v);
      if (u == v) {
        continue;
      }
      int t = cnt[u] + cnt[v];
      uf.unite(u, v);
      cnt[uf.root(u)] = t;
    }
    if (type == 2) {
      int v;
      cin >> v;
      v--;
      color[v] = !color[v];
      bool f = color[v];
      v = uf.root(v);
      if (f) {
        cnt[v]++;
      } else {
        cnt[v]--;
      }
    }
    if (type == 3) {
      int v;
      cin >> v;
      v--;
      v = uf.root(v);
      if (cnt[v] >= 1) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}

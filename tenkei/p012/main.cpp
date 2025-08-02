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
  int h, w, q;
  cin >> h >> w >> q;
  UnionFind uf(h * w);
  vector<vector<bool>> color(h, vector<bool>(w, false));
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int r, c;
      cin >> r >> c;
      r--;
      c--;
      color[r][c] = true;
      int n = r * w + c;
      int up = n - w, down = n + w, left = n - 1, right = n + 1;
      if (r - 1 >= 0 && color[r - 1][c]) {
        uf.unite(n, up);
      }
      if (r + 1 < h && color[r + 1][c]) {
        uf.unite(n, down);
      }
      if (c - 1 >= 0 && color[r][c - 1]) {
        uf.unite(n, left);
      }
      if (c + 1 < w && color[r][c + 1]) {
        uf.unite(n, right);
      }
    }
    if (type == 2) {
      int ra, ca, rb, cb;
      cin >> ra >> ca >> rb >> cb;
      ra--;
      ca--;
      rb--;
      cb--;
      int a = ra * w + ca, b = rb * w + cb;
      if (color[ra][ca] && color[rb][cb] && uf.same(a, b)) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    g[y - 1].push_back(x - 1);
  }
  vector<bool> f(n);
  int q;
  cin >> q;
  while (q--) {
    int type, v;
    cin >> type >> v;
    v--;
    if (type == 1) {
      if (f[v]) {
        continue;
      }
      f[v] = true;
      queue<int> que;
      que.push(v);
      while (!que.empty()) {
        int u = que.front();
        que.pop();
        for (int v : g[u]) {
          if (f[v]) {
            continue;
          }
          f[v] = true;
          que.push(v);
        }
      }
    }
    if (type == 2) {
      if (f[v]) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}

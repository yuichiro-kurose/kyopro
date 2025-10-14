// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    vector<vector<int>> g(n), h(n);
    vector<set<int>> st(k + k);
    for (int i = 0; i < n; i++) {
      st[0].insert(i);
    }
    for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      u--;
      v--;
      g[u].push_back(v);
      h[v].push_back(u);
      if (s[v] == 'B') {
        st[0].erase(u);
      }
    }
    for (int i = 0; i < k + k - 1; i++) {
      if (i % 2 == 0) {
        for (int u : st[i]) {
          for (int v : h[u]) {
            st[i + 1].insert(v);
          }
        }
      } else {
        for (int j = 0; j < n; j++) {
          bool f = true;
          for (int v : g[j]) {
            if (!st[i].count(v)) {
              f = false;
            }
          }
          if (f) {
            st[i + 1].insert(j);
          }
        }
      }
    }
    bool f = true;
    for (int v : g[0]) {
      if (st[k + k - 2].count(v)) {
        cout << "Alice" << endl;
        f = false;
        break;
      }
    }
    if (f) {
      cout << "Bob" << endl;
    }
  }
  return 0;
}


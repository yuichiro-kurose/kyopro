// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    for (int i = 0; i < k; i++) {
      int v;
      cin >> v;
      g[u - 1].push_back(v - 1);
    }
  }
  vector<int> d(n, -1);
  queue<int> que;
  d[0] = 0;
  que.push(0);
  while (!que.empty()) {
    int u = que.front();
    que.pop();
    for (int v : g[u]) {
      if (d[v] == -1) {
        d[v] = d[u] + 1;
        que.push(v);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << i + 1 << ' ' << d[i] << endl;
  }
  return 0;
}

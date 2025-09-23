// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n + 1);
  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    if (l == 0) {
      g[i].push_back(i + 1);
      g[i + 1].push_back(i);
    }
  }
  vector<bool> vis(n + 1, false);
  queue<int> que;
  vis[0] = true;
  vis[n] = true;
  que.push(0);
  que.push(n);
  int ans = n + 1;
  while (!que.empty()) {
    ans--;
    int u = que.front();
    que.pop();
    for (int v : g[u]) {
      if (!vis[v]) {
        vis[v] = true;
        que.push(v);
      }
    }
  }
  cout << ans << endl;
  return 0;
}

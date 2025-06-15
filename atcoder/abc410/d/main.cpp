// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  map<pair<int, int>, vector<pair<int, int>>> g;
  for (int i = 0; i < m; i++) {
    int a, b, w;
    cin >> a >> b >> w;
    a--;
    b--;
    for (int j = 0; j < 1024; j++) {
      g[make_pair(a, j)].push_back(make_pair(b, j ^ w));
    }
  }
  int ans = inf;
  map<pair<int, int>, bool> vis;
  auto bfs = [&]() -> void {
    queue<pair<int, int>> que;
    vis[make_pair(0, 0)] = true;
    que.push(make_pair(0, 0));
    while (!que.empty()) {
      pair<int, int> u = que.front();
      que.pop();
      for (auto v : g[u]) {
        if (!vis[v]) {
          if (v.first == n - 1) {
            ans = min(ans, v.second);
          }
          vis[v] = true;
          que.push(v);
        }
      }
    }
  };
  bfs();
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  vector<vector<pair<int, int>>> g(n);
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    g[a].push_back(make_pair(b, c));
    g[b].push_back(make_pair(a, c));
  }
  int q;
  cin >> q;
  while (q--) {
    int s, t;
    cin >> s >> t;
    s--;
    t--;
    auto dijkstra = [&]() -> vector<int> {
      vector<int> width(n, inf);
      priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
      width[s] = w[s];
      que.push(make_pair(w[s], s));
      while (!que.empty()) {
        pair<int, int> p = que.top();
        que.pop();
        int u = p.second;
        if (width[u] < p.first) {
          continue;
        }
        for (auto [v, c] : g[u]) {
          if (c < width[u]) {
            continue;
          }
          if (width[v] > width[u]) {
            width[v] = min(width[u], w[v]);
            que.push(make_pair(width[v], v));
          }
        }
      }
      return width;
    };
    vector<int> width = dijkstra();
    if (width[t] != inf) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}

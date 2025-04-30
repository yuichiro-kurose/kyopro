// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, int>>> g(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(make_pair(b, i));
    g[b].push_back(make_pair(a, i));
  }
  unordered_set<int> unvis;
  for (int i = 0; i < n; i++) {
    unvis.insert(i);
  }
  queue<pair<int, int>> extra;
  vector<tuple<int, int, int>> ans;
  for (int i = 0; i < n; i++) {
    if (!unvis.count(i) || g[i].empty()) {
      continue;
    }
    queue<int> que;
    unvis.erase(i);
    que.push(i);
    unordered_set<int> used;
    while (true) {
      while (!que.empty()) {
        int u = que.front();
        que.pop();
        for (auto p : g[u]) {
          int v = p.first, edge = p.second;
          if (used.count(edge)) {
            continue;
          }
          used.insert(edge);
          if (unvis.count(v)) {
            unvis.erase(v);
            que.push(v);
          } else {
            extra.push(make_pair(edge, u));
          }
        }
      }
      if (unvis.empty()) {
        break;
      }
      pair<int, int> p = extra.front();
      extra.pop();
      auto itr = unvis.begin();
      ans.push_back(make_tuple(p.first, p.second, *itr));
      que.push(*itr);
      unvis.erase(itr);
    }
  }
  cout << ans.size() << endl;
  for (auto t : ans) {
    int edge = get<0>(t) + 1;
    int u = get<1>(t) + 1;
    int v = get<2>(t) + 1;
    cout << edge << ' ' << u << ' ' << v << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  s += "..";
  t += "..";
  map<string, int> dist;
  queue<string> que;
  dist[s] = 0;
  que.push(s);
  while (!que.empty()) {
    string u = que.front();
    que.pop();
    if (u == t) {
      cout << dist[u] << endl;
      return 0;
    }
    int idx;
    for (int i = 0; i < u.size(); i++) {
      if (u[i] == '.') {
        idx = i;
        break;
      }
    }
    for (int i = 0; i < u.size() - 1; i++) {
      if (i == idx - 1 || i == idx || i == idx + 1) {
        continue;
      }
      string v = u;
      swap(v[i], v[idx]);
      swap(v[i + 1], v[idx + 1]);
      if (dist.count(v)) {
        continue;
      }
      dist[v] = dist[u] + 1;
      que.push(v);
    }
  }
  cout << -1 << endl;
  return 0;
}

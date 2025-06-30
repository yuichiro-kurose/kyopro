// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  set<pair<int, int>> edges;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    edges.insert(make_pair(a, b));
    edges.insert(make_pair(b, a));
  }
  vector<int> p(n + 1);
  for (int i = 0; i < n; i++) {
    p[i] = i;
  }
  p[n] = -1;
  int ans = inf;
  do {
    bool f = true;
    vector<int> x, y;
    for (int i = 0; i < n + 1; i++) {
      if (p[i] == -1) {
        f = false;
        continue;
      }
      if (f) {
        x.push_back(p[i]);
      } else {
        y.push_back(p[i]);
      }
    }
    if (0 < x.size() && x.size() < 3 || 0 < y.size() && y.size() < 3) {
      continue;
    }
    set<pair<int, int>> s, t;
    for (int i = 0; i < x.size(); i++) {
      int u = x[i], v = x[(i + 1) % x.size()];
      s.insert(make_pair(u, v));
      s.insert(make_pair(v, u));
    }
    for (int i = 0; i < y.size(); i++) {
      int u = y[i], v = y[(i + 1) % y.size()];
      t.insert(make_pair(u, v));
      t.insert(make_pair(v, u));
    }
    int now = 0;
    for (auto p : s) {
      if (!edges.count(p)) {
        now++;
      }
    }
    for (auto p : t) {
      if (!edges.count(p)) {
        now++;
      }
    }
    for (auto p : edges) {
      if (!s.count(p) && !t.count(p)) {
        now++;
      }
    }
    now /= 2;
    ans = min(ans, now);
  } while (next_permutation(p.begin(), p.end()));
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> edges(m);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    edges[i] = make_pair(u, v);
  }
  int ans = inf;
  for (int i = 0; i < (1 << n); i++) {
    int now = 0;
    for (int j = 0; j < m; j++) {
      auto [u, v] = edges[j];
      if (((i >> u) & 1) == ((i >> v) & 1)) {
        now++;
      }
    }
    ans = min(ans, now);
  }
  cout << ans << endl;
  return 0;
}

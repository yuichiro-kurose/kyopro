// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<tuple<int, long long, long long>>> g(n);
  for (int i = 0; i < m; i++) {
    int s, t;
  long long d, time;
    cin >> s >> t >> d >> time;
    s--;
    t--;
    g[s].push_back(make_tuple(t, d, time));
    g[t].push_back(make_tuple(s, d, time));
  }
  vector<vector<pair<long long, long long>>> dp(1 << n, vector<pair<long long, long long>>(n, make_pair(inf, 0)));
  dp[0][0] = make_pair(0, 1);
  for (int i = 0; i < 1 << n; i++) {
    for (int j = 0; j < n; j++) {
      auto p = dp[i][j];
      if (p.second == 0) {
        continue;
      }
      for (auto tup : g[j]) {
        int k = get<0>(tup);
        long long w = get<1>(tup), lim = get<2>(tup);
        if ((i >> k) & 1) {
          continue;
        }
        if (p.first + w > lim) {
          continue;
        }
        auto& q = dp[i | (1 << k)][k];
        if (q.first == p.first + w) {
          q.second += p.second;
        }
        if (q.first > p.first + w) {
          q.first = p.first + w;
          q.second = p.second;
        }
      }
    }
  }
  auto p = dp[(1 << n) - 1][0];
  if (p.second == 0) {
    cout << "IMPOSSIBLE" << endl;
  } else {
    cout << p.first << ' ' << p.second << endl;
  }
  return 0;
}

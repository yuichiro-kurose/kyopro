// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  long long x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<int>> g(n);
  queue<int> que;
  vector<long long> dp(n, -1);
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    if (p == -1) {
      que.push(i);
      dp[i] = x - a[i];
    } else {
      g[p - 1].push_back(i);
    }
  }
  while (!que.empty()) {
    int u = que.front();
    que.pop();
    for (int v : g[u]) {
      dp[v] = dp[u] - a[v];
      que.push(v);
    }
  }
  int ans = -1;
  for (int i = 0; i < n; i++) {
    if (dp[i] >= 0) {
      ans = i + 1;
    }
  }
  cout << ans << endl;
  return 0;
}

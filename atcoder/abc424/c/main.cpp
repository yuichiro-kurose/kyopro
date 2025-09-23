// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> g(n);
  vector<bool> f(n, false);
  int ans = 0;
  queue<int> que;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) {
      que.push(i);
      f[i] = true;
    } else {
      g[a - 1].push_back(i);
      g[b - 1].push_back(i);
    }
  }
  while (!que.empty()) {
    int lv = que.front();
    que.pop();
    ans++;
    // cout << lv << endl;
    while (!g[lv].empty()) {
      int nlv = g[lv].back();
      if (!f[nlv]) {
        que.push(nlv);
        f[nlv] = true;
      }
      g[lv].pop_back();
    }
  }
  cout << ans << endl;
  return 0;
}

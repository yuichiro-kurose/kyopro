// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n), c(n);
  vector<vector<int>> g(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    g[c[i]].push_back(p[i]);
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    vector<int> l;
    for (int j = 0; j < (int) g[i].size(); j++) {
      int a = g[i][j];
      auto itr = lower_bound(l.begin(), l.end(), a);
      if (itr == l.end()) {
        l.push_back(a);
      } else {
        *itr = a;
      }
    }
    ans += (long long) i * (g[i].size() - l.size());
  }
  cout << ans << endl;
  return 0;
}

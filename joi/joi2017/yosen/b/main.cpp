// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> p(m);
  for (int i = 0; i < m; i++) {
    cin >> p[i].first >> p[i].second;
  }
  sort(p.rbegin(), p.rend());
  int ans = 0;
  for (int i = 0; i < m - 1; i++) {
    if (p[i].first < n) {
      ans += n - p[i].first;
    }
  }
  cout << ans << endl;
  return 0;
}

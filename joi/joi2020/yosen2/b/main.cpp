// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> ps(n);
  for (int i = 0; i < n; i++) {
    cin >> ps[i].first >> ps[i].second;
  }
  sort(ps.begin(), ps.end());
  int ans = max(ps[n - 1].first, ps[n - 1].second), na = ps[n - 1].first;
  for (int i = n - 2; i >= 0; i--) {
    ans += max(na - ps[i].first, ps[i].second - ans);
    na = ps[i].first;
  }
  ans += ps[0].first;
  cout << ans << endl;
  return 0;
}

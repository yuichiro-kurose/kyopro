// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i].first >> p[i].second;
  }
  sort(p.begin(), p.end());
  vector<int> l(n), r(n);
  for (int i = 0; i < n; i++) {
    l[i] = p[i].first;
    r[i] = p[i].second;
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    int idx = upper_bound(l.begin(), l.end(), r[i]) - l.begin();
    ans += idx - i - 1;
  }
  cout << ans << endl;
  return 0;
}

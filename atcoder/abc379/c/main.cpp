// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<pair<long long, long long>> p(m);
  for (int i = 0; i < m; i++) {
    cin >> p[i].first;
  }
  for (int i = 0; i < m; i++) {
    cin >> p[i].second;
  }
  sort(p.begin(), p.end());
  vector<int> x(m), a(m);
  for (int i = 0; i < m; i++) {
    x[i] = p[i].first;
    a[i] = p[i].second;
  }
  x.push_back(n);
  a.push_back(0);
  bool f = true;
  if (x[0] != 1) {
    f = false;
  }
  long long ans = 0;
  for (int i = 0; i < m; i++) {
    long long w = x[i + 1] - x[i];
    long long r = a[i] - w;
    if (r < 0) {
      f = false;
    }
    ans += (w - 1) * w / 2 + w * r;
    a[i + 1] += r;
  }
  if (a[m] != 1) {
    f = false;
  }
  if (f) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}

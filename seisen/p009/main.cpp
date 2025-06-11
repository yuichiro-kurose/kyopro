// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m;
  cin >> m;
  vector<pair<int, int>> a(m);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    a[i].first = x;
    a[i].second = y;
    if (i > 0) {
      a[i].first -= a[0].first;
      a[i].second -= a[0].second;
    }
  }
  int n;
  cin >> n;
  set<pair<int, int>> st;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    st.insert(make_pair(x, y));
  }
  for (auto u : st) {
    bool ok = true;
    for (int i = 1; i < m; i++) {
      pair<int, int> v;
      v.first = u.first + a[i].first;
      v.second = u.second + a[i].second;
      if (!st.count(v)) {
        ok = false;
      }
    }
    if (ok) {
      int x = u.first - a[0].first;
      int y = u.second - a[0].second;
      cout << x << ' ' << y << endl;
      return 0;
    }
  }
  return 0;
}

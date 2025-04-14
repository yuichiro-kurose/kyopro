// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> a(2);
  int color = -1;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if (i & 1) {
      if (c == color) {
        a[c].back().second = i;
      } else {
        a[abs(c - 1)].pop_back();
        if (a[c].empty()) {
          a[c].push_back(make_pair(0, i));
        } else {
          a[c].back().second = i;
        }
      }
    } else {
      if (c == color) {
        a[c].back().second = i;
      } else {
        a[c].push_back(make_pair(i, i));
      }
    }
    color = c;
  }
  int ans = 0;
  for (auto p : a[0]) {
    ans += p.second - p.first + 1;
  }
  cout << ans << endl;
  return 0;
}

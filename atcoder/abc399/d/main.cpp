// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> x = {-1, 1};

void solve() {
  int n;
  cin >> n;
  vector<int> a(n * 2);
  vector<vector<int>> tmp(n);
  for (int i = 0; i < n * 2; i++) {
    cin >> a[i];
    tmp[a[i] - 1].push_back(i);
  }
  set<pair<int, int>> st1;
  for (int i = 0; i < n; i++) {
    if (abs(tmp[i][0] - tmp[i][1]) != 1) {
      st1.insert(make_pair(tmp[i][0], tmp[i][1]));
    }
  }
  int ans = 0;
  auto st2 = st1;
  for (auto p : st1) {
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        pair<int, int> q = make_pair(p.first + x[i], p.second + x[j]);
        if (st2.count(q)) {
          ans++;
          st2.erase(p);
          st2.erase(q);
        }
      }
    }
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}

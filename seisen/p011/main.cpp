// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> s(m);
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    s[i].resize(k);
    for (int j = 0; j < k; j++) {
      cin >> s[i][j];
      s[i][j]--;
    }
  }
  vector<int> p(m);
  for (int i = 0; i < m; i++) {
    cin >> p[i];
  }
  int ans = 0;
  for (int i = 0; i < 1 << n; i++) {
    bool f = true;
    for (int j = 0; j < m; j++) {
      int cnt = 0;
      for (int x : s[j]) {
        if ((i >> x) & 1) {
          cnt++;
        }
      }
      if (cnt % 2 != p[j]) {
        f = false;
      }
    }
    if (f) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

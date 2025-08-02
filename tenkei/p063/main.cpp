// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<int>> p(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> p[i][j];
    }
  }
  int ans = 0;
  for (int i = 0; i < 1 << h; i++) {
    map<int, int> mp;
    for (int j = 0; j < w; j++) {
      int n = -1;
      bool f = true;
      for (int k = 0; k < h; k++) {
        if ((i >> k) & 1) {
          if (n != -1 && p[k][j] != n) {
            f = false;
          }
          n = p[k][j];
        }
      }
      if (f) {
        mp[n] += __builtin_popcount(i);
      }
    }
    int mx = 0;
    for (auto p : mp) {
      mx = max(mx, p.second);
    }
    ans = max(ans, mx);
  }
  cout << ans << endl;
  return 0;
}

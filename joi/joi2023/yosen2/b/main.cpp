// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> x(4, vector<int>(n));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x[i][j];
    }
    sort(x[i].begin(), x[i].end());
    x[i].push_back(inf);
  }
  int ans = inf;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < n; j++) {
      int mx = 0;
      for (int k = 0; k < 4; k++) {
        if (i == k) {
          continue;
        }
        mx = max(mx, x[k][lower_bound(x[k].begin(), x[k].end(), x[i][j]) - x[k].begin()]);
      }
      if (mx != inf) {
        ans = min(ans, mx - x[i][j]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}


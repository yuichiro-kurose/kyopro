// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> cnt(3, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if (c == 'W') {
        cnt[0][i]++;
      }
      if (c == 'B') {
        cnt[1][i]++;
      }
      if (c == 'R') {
        cnt[2][i]++;
      }
    }
  }
  int ans = inf;
  for (int i = 1; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int now = n * m;
      for (int k = 0; k < n; k++) {
        if (k < i) {
          now -= cnt[0][k];
        } else if (k < j) {
          now -= cnt[1][k];
        } else {
          now -= cnt[2][k];
        }
      }
      ans = min(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, k;
  long long v;
  cin >> h >> w >> k >> v;
  vector<vector<long long>> a(h + 1, vector<long long>(w + 1, 0));
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cin >> a[i][j];
      a[i][j] += k;
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      a[i][j] += a[i - 1][j];
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      a[i][j] += a[i][j - 1];
    }
  }
  int ans = 0;
  for (int x1 = 1; x1 <= h; x1++) {
    for (int y1 = 1; y1 <= w; y1++) {
      for (int x2 = x1; x2 <= h; x2++) {
        for (int y2 = y1; y2 <= w; y2++) {
          long long cost = a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1];
          if (cost <= v) {
            ans = max(ans, (x2 - x1 + 1) * (y2 - y1 + 1));
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}

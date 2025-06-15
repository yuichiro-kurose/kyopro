// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  int ans = inf;
  for (int m = 0; m < h; m++) {
    for (int n = 0; n < w; n++) {
      int now = 0;
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          now += min(abs(i - m), abs(j - n)) * a[i][j];
        }
      }
      ans = min(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}

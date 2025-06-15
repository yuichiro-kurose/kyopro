// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int r, c;
  cin >> r >> c;
  vector<vector<int>> a(r, vector<int>(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }
  int ans = 0;
  for (int i = 0; i < 1 << r; i++) {
    int now = 0;
    for (int j = 0; j < c; j++) {
      int x = 0, y = 0;
      for (int k = 0; k < r; k++) {
        if ((i >> k) & 1) {
          if (a[k][j] == 0) {
            y++;
          } else {
            x++;
          }
        } else {
          if (a[k][j] == 0) {
            x++;
          } else {
            y++;
          }
        }
      }
      now += max(x, y);
    }
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}

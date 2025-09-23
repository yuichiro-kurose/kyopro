// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

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
  int ans = 0;
  vector<vector<int>> cnt(h, vector<int>(w, 0));
  for (int i = h - 1; i >= 0; i--) {
    int cnt2 = 0;
    for (int j = w - 1; j >= 0; j--) {
      if (i + 1 < h) {
        cnt[i][j] += cnt[i + 1][j];
      }
      if (j + 1 < w) {
        cnt[i][j] += cnt2;
      }
      if (a[i][j] == cnt[i][j] % 2) {
        ans++;
        cnt[i][j]++;
        cnt2++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

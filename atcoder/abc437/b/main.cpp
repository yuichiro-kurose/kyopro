// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  vector<int> cnt(h, 0);
  for (int k = 0; k < n; k++) {
    int b;
    cin >> b;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (a[i][j] == b) {
          cnt[i]++;
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < h; i++) {
    ans = max(ans, cnt[i]);
  }
  cout << ans << endl;
  return 0;
}

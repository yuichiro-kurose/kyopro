// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> b[i][j];
    }
  }
  long long ans = 0;
  for (int i = 0; i < h - 1; i++) {
    for (int j = 0; j < w - 1; j++) {
      int d = b[i][j] - a[i][j];
      ans += abs(d);
      a[i][j] += d;
      a[i + 1][j] += d;
      a[i][j + 1] += d;
      a[i + 1][j + 1] += d;
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a[i][j] != b[i][j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  cout << ans << endl;
  return 0;
}

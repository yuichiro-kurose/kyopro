// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, d;
  cin >> h >> w >> d;
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }
  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      for (int k = 0; k < h; k++) {
        for (int l = 0; l < w; l++) {
          if (i == k && j == l) {
            continue;
          }
          if (s[i][j] == '#' || s[k][l] == '#') {
            continue;
          }
          int now = 0;
          for (int m = 0; m < h; m++) {
            for (int n = 0; n < w; n++) {
              if (s[m][n] == '.' && min(abs(i - m) + abs(j - n), abs(k - m) + abs(l - n)) <= d) {
                now++;
              }
            }
          }
          ans = max(ans, now);
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}

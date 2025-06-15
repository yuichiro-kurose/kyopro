// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> s(h);
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }
  int ans = inf;
  for (int i = 0; i < h; i++) {
    int len = 0, now = 0;
    for (int j = 0; j < w; j++) {
      if (s[i][j] == 'x') {
        len = 0;
        now = 0;
      }
      if (s[i][j] == '.') {
        len++;
        now++;
      }
      if (s[i][j] == 'o') {
        len++;
      }
      if (len >= k) {
        ans = min(ans, now);
        if (s[i][j - k + 1] == '.') {
          now--;
        }
      }
    }
  }
  for (int j = 0; j < w; j++) {
    int len = 0, now = 0;
    for (int i = 0; i < h; i++) {
      if (s[i][j] == 'x') {
        len = 0;
        now = 0;
      }
      if (s[i][j] == '.') {
        len++;
        now++;
      }
      if (s[i][j] == 'o') {
        len++;
      }
      if (len >= k) {
        ans = min(ans, now);
        if (s[i - k + 1][j] == '.') {
          now--;
        }
      }
    }
  }
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}

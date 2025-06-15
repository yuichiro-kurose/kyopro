// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, n;
  cin >> h >> w >> n;
  string t;
  cin >> t;
  vector<string> s(h);
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }
  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '#') {
        continue;
      }
      int x = i, y = j;
      bool f = true;
      for (char c : t) {
        if (c == 'L') {
          y--;
        }
        if (c == 'R') {
          y++;
        }
        if (c == 'U') {
          x--;
        }
        if (c == 'D') {
          x++;
        }
        if (s[x][y] == '#') {
          f = false;
          break;
        }
      }
      if (f) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

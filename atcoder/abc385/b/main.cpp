// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  x--;
  y--;
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }
  string t;
  cin >> t;
  int ans = 0;
  for (char c : t) {
    int nx = x, ny = y;
    if (c == 'U') {
      nx--;
    }
    if (c == 'D') {
      nx++;
    }
    if (c == 'L') {
      ny--;
    }
    if (c == 'R') {
      ny++;
    }
    if (s[nx][ny] == '#') {
      continue;
    }
    if (s[nx][ny] == '@') {
      ans++;
      s[nx][ny] = '.';
    }
    x = nx;
    y = ny;
  }
  cout << x + 1 << ' ' << y + 1 << ' ' << ans << endl;
  return 0;
}

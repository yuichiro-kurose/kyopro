// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
      cin >> s[i];
    }
    int ans = 9;
    auto f = [&](auto f, int now) -> void {
      if (now >= ans) {
        return;
      }
      for (int i = 0; i < h - 1; i++) {
        for (int j = 0; j < w - 1; j++) {
          if (s[i][j] == '#' && s[i + 1][j] == '#' && s[i][j + 1] == '#' && s[i + 1][j + 1] == '#') {
            for (int x = 0; x < 2; x++) {
              for (int y = 0; y < 2; y++) {
                s[i + x][j + y] = '.';
                f(f, now + 1);
                s[i + x][j + y] = '#';
              }
            }
            return;
          }
        }
      }
      ans = min(ans, now);
    };
    f(f, 0);
    cout << ans << endl;
  }
  return 0;
}

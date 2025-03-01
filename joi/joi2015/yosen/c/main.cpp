// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<char>> g(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> g[i][j];
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      int now = j, ans = -1;
      while (now >= 0) {
        if (g[i][now] == 'c') {
          ans = j - now;
          break;
        }
        now--;
      }
      if (j > 0) {
        cout << ' ';
      }
      cout << ans;
    }
    cout << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }
  int u = inf, d = 0, l = inf, r = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '#') {
        u = min(u, i);
        d = max(d, i);
        l = min(l, j);
        r = max(r, j);
      }
    }
  }
  for (int i = u; i <= d; i++) {
    for (int j = l; j <= r; j++) {
      if (s[i][j] == '.') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}

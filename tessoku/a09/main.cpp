// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> z(h + 2, vector<int>(w + 2, 0));
  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    z[a][b]++;
    z[c + 1][b]--;
    z[a][d + 1]--;
    z[c + 1][d + 1]++;
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      z[i][j] += z[i - 1][j];
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      z[i][j] += z[i][j - 1];
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (j > 1) {
        cout << ' ';
      }
      cout << z[i][j];
    }
    cout << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m, n;
  cin >> m >> n;
  vector<vector<char>> a(m, vector<char>(n)), b(2, vector<char>(2));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> b[i][j];
    }
  }
  vector<vector<vector<int>>> c(m, vector<vector<int>>(n, vector<int>(3, 0)));
  int ans = 0, mx = 0;
  for (int i = 0; i < m - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      int cnt = 0, x, y, z;
      for (int k = 0; k < 2; k++) {
        for (int l = 0; l < 2; l++) {
          if (a[i + k][j + l] != b[k][l]) {
            x = i + k;
            y = j + l;
            if (b[k][l] == 'J') {
              z = 0;
            }
            if (b[k][l] == 'O') {
              z = 1;
            }
            if (b[k][l] == 'I') {
              z = 2;
            }
            cnt++;
          }
        }
      }
      if (cnt == 0) {
        ans++;
      }
      if (cnt == 1) {
        c[x][y][z]++;
        mx = max(mx, c[x][y][z]);
      }
    }
  }
  ans += mx;
  cout << ans << endl;
  return 0;
}
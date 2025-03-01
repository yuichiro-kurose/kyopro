// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, d;
  cin >> n >> m >> d;
  vector<vector<char>> g(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> g[i][j];
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int p = 2;
      for (int x = 0; x < d; x++) {
        if (i + x >= n || g[i + x][j] == '#') {
          p--;
          break;
        }
      }
      for (int x = 0; x < d; x++) {
        if (j + x >= m || g[i][j + x] == '#') {
          p--;
          break;
        }
      }
      ans += p;
    }
  }
  cout << ans << endl;
  return 0;
}

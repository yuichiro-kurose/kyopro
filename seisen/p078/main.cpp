// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m, n;
  cin >> m >> n;
  int k;
  cin >> k;
  vector<vector<vector<int>>> cnt(3, vector<vector<int>>(m + 1, vector<int>(n + 1, 0)));
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      char c;
      cin >> c;
      if (c =='J') {
        cnt[0][i][j]++;
      }
      if (c == 'O') {
        cnt[1][i][j]++;
      }
      if (c == 'I') {
        cnt[2][i][j]++;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 1; j <= m; j++) {
      for (int k = 1; k <= n; k++) {
        cnt[i][j][k] += cnt[i][j - 1][k];
      }
    }
    for (int j = 1; j <= m; j++) {
      for (int k = 1; k <= n; k++) {
        cnt[i][j][k] += cnt[i][j][k - 1];
      }
    }
  }
  for (int i = 0; i < k; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int j = 0; j < 3; j++) {
      if (j > 0) {
        cout << ' ';
      }
      cout << cnt[j][c][d] - cnt[j][a - 1][d] - cnt[j][c][b - 1] + cnt[j][a - 1][b - 1];
    }
    cout << endl;
  }
  return 0;
}

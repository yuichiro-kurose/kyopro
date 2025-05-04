// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> s(n);
  vector<vector<int>> row(n, vector<int>(n, 0)), col(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    for (int j = 0; j < n; j++) {
      if (s[i][j] == 'o') {
        row[i][j] = 1;
        col[j][i] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      row[i][j] += row[i][j - 1];
    }
  }
  for (int j = 0; j < n; j++) {
    for (int i = 1; i < n; i++) {
      col[j][i] += col[j][i - 1];
    }
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (s[i][j] == 'o') {
        ans += (row[i][n - 1] - row[i][j]) * (col[j][i] - 1);
        ans += (row[i][j] - 1) * (col[j][i] - 1);
        ans += (row[i][j] - 1) * (col[j][n - 1] - col[j][i]);
        ans += (row[i][n - 1] - row[i][j]) * (col[j][n - 1] - col[j][i]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}

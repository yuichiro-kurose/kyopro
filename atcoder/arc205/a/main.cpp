// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<vector<char>> s(n, vector<char>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> s[i][j];
    }
  }
  vector<vector<int>> sum(n, vector<int>(n, 0));
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (s[i][j] == '.' && s[i][j + 1] == '.' && s[i + 1][j] == '.' && s[i + 1][j + 1] == '.') {
        sum[i + 1][j + 1]++;
      }
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 2; j < n; j++) {
      sum[i][j] += sum[i][j - 1];
    }
  }
  for (int i = 2; i < n; i++) {
    for (int j = 1; j < n; j++) {
      sum[i][j] += sum[i - 1][j];
    }
  }
  while (q--) {
    int u, d, l, r;
    cin >> u >> d >> l >> r;
    int ans = sum[d - 1][r - 1] - sum[u - 1][r - 1] - sum[d - 1][l - 1] + sum[u - 1][l - 1];
    cout << ans << endl;
  }
  return 0;
}

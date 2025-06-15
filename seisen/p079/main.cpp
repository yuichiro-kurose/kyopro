// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<int>> cnt(n + 1, vector<int>(n + 1, 0));
  for (int i = 0; i < m; i++) {
    int l, r;
    cin >> l >> r;
    cnt[l][r]++;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cnt[i][j] += cnt[i - 1][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cnt[i][j] += cnt[i][j - 1];
    }
  }
  while (q--) {
    int p, q;
    cin >> p >> q;
    cout << cnt[q][q] - cnt[p - 1][q] - cnt[q][p - 1] + cnt[p - 1][p - 1] << endl;
  }
  return 0;
}

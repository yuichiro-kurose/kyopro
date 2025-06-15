// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  long long ans = 0;
  for (int t1 = 0; t1 < m - 1; t1++) {
    for (int t2 = t1 + 1; t2 < m; t2++) {
      long long now = 0;
      for (int i = 0; i < n; i++) {
        now += max(a[i][t1], a[i][t2]);
      }
      ans = max(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}

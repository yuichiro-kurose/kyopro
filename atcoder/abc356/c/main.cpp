// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> c(m);
  vector<vector<int>> a(m);
  vector<char> r(m);
  for (int i = 0; i < m; i++) {
    cin >> c[i];
    a[i].resize(c[i]);
    for (int j = 0; j < c[i]; j++) {
      cin >> a[i][j];
      a[i][j]--;
    }
    cin >> r[i];
  }
  int ans = 0;
  for (int i = 0; i < 1 << n; i++) {
    bool f = true;
    for (int j = 0; j < m; j++) {
      int cnt = 0;
      for (int k = 0; k < c[j]; k++) {
        if ((i >> a[j][k]) & 1) {
          cnt++;
        }
      }
      if (cnt < k && r[j] == 'o' || cnt >= k && r[j] == 'x') {
        f = false;
      }
    }
    if (f) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

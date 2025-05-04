// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<vector<long long>>> a(n + 1, vector<vector<long long>>(n + 1, vector<long long>(n + 1, 0)));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        cin >> a[i][j][k];
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        a[i][j][k] += a[i - 1][j][k];
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        a[i][j][k] += a[i][j - 1][k];
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        a[i][j][k] += a[i][j][k - 1];
      }
    }
  }
  int q;
  cin >> q;
  while (q--) {
    int lx, rx, ly, ry, lz, rz;
    cin >> lx >> rx >> ly >> ry >> lz >> rz;
    long long ans = a[rx][ry][rz]
                  - a[lx - 1][ry][rz] - a[rx][ly - 1][rz] - a[rx][ry][lz - 1]
                  + a[rx][ly - 1][lz - 1] + a[lx - 1][ry][lz - 1] + a[lx - 1][ly - 1][rz]
                  - a[lx - 1][ly - 1][lz - 1];
    cout << ans << endl;
  }
  return 0;
}

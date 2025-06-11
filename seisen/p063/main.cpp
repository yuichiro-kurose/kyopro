// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<long long>> a(n, vector<long long>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (a[i][j] > a[i][k] + a[k][j]) {
          cout << -1 << endl;
          return 0;
        }
      }
    }
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      bool f = true;
      for (int k = 0; k < n; k++) {
        if (k != i && k != j && a[i][j] == a[i][k] + a[k][j]) {
          f = false;
        }
      }
      if (f) {
        ans += a[i][j];
      }
    }
  }
  ans /= 2;
  cout << ans << endl;
  return 0;
}

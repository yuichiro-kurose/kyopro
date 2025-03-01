// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(3));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  vector<int> ans(n, 0);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < n; j++) {
      bool f = true;
      for (int k = 0; k < n; k++) {
        if (k != j && a[k][i] == a[j][i]) {
          f = false;
        }
      }
      if (f) {
        ans[j] += a[j][i];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> a(n + 1, vector<int>(n + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cin >> a[i][j];
    }
  }
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    if (ans >= i) {
      ans = a[ans][i];
    } else {
      ans = a[i][ans];
    }
  }
  cout << ans << endl;
  return 0;
}

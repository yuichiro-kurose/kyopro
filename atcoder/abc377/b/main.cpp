// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<vector<bool>> f(2, vector<bool>(8, true));
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      char c;
      cin >> c;
      if (c == '#') {
        f[0][i] = false;
        f[1][j] = false;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (f[0][i] && f[1][j]) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

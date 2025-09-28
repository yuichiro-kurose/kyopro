// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t, m;
  cin >> t >> m;
  vector<vector<int>> comb(5001, vector<int>(5001));
  for (int i = 0; i <= 5000; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        comb[i][j] = 1;
      } else {
        comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % m;
      }
    }
  }
  while (t--) {
    int n;
    cin >> n;
    vector<int> c(n);
    int x = 0;
    for (int i = 0; i < n; i++) {
      cin >> c[i];
      x += c[i];
    }
    long long ans = 1;
    for (int i = 0; i < n; i++) {
      ans = (ans * comb[x][c[i]]) % m;
      x -= c[i];
    }
    cout << ans << endl;
  }
  return 0;
}

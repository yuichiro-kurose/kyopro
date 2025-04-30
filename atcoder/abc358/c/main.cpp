// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int ans = n;
  for (int i = 0; i < 1 << n; i++) {
    int x = 0, now = 0;
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        now++;
        for (int k = 0; k < m; k++) {
          if (s[j][k] == 'o') {
            x |= (1 << k);
          }
        }
      }
    }
    if (x == (1 << m) - 1) {
      ans = min(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<string> s(n), t(m);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> t[i];
  }
  for (int a = 0; a < n - m + 1; a++) {
    for (int b = 0; b < n - m + 1; b++) {
      bool f = true;
      for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
          if (s[a + i][b + j] != t[i][j]) {
            f = false;
          }
        }
      }
      if (f) {
        cout << a + 1 << ' ' << b + 1 << endl;
        return 0;
      }
    }
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m;
  cin >> m;
  vector<string> s(3);
  for (int i = 0; i < 3; i++) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());
  int ans = inf;
  do {
    for (int n = 0; n <= 9; n++) {
      int t = -1;
      bool f;
      for (int i = 0; i < 3; i++) {
        t++;
        f = false;
        for (int j = 0; j < m; j++) {
          if (s[i][t % m] == n + '0') {
            f = true;
            break;
          }
          t++;
        }
        if (!f) {
          break;
        }
      }
      if (f) {
        ans = min(ans, t);
      }
    }
  } while (next_permutation(s.begin(), s.end()));
  if (ans == inf) {
    cout << -1 << endl;
  } else { 
    cout << ans << endl;
  }
  return 0;
}

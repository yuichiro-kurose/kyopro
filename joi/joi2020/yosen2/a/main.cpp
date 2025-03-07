// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<char>> s(n, vector<char>(n)), t(n, vector<char>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> s[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t[i][j];
    }
  }
  int ans = inf;
  for (int k = 0; k < 4; k++) {
    int now = min(k, 4 - k);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (s[i][j] != t[i][j]) {
          now++;
        }
      }
    }
    ans = min(ans, now);
    vector<vector<char>> tmp = s;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        s[j][n - 1 - i] = tmp[i][j];
      }
    }
  }
  cout << ans << endl;
  return 0;
}

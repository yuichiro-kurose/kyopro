// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

vector<vector<char>> f(vector<vector<char>> x, int n) {
  vector<vector<char>> ret(n, vector<char>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ret[j][n - 1 - i] = x[i][j];
    }
  }
  return ret;
}

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
    int now = k;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (s[i][j] != t[i][j]) {
          now++;
        }
      }
    }
    ans = min(ans, now);
    s = f(s, n);
  }
  cout << ans << endl;
  return 0;
}

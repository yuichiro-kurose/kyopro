// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {1, 0};
const vector<int> dy = {0, 1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  int n;
  cin >> n;
  set<pair<int, int>> st;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    st.insert(make_pair(x - 1, y - 1));
  }
  vector<vector<int>> dp(b, vector<int>(a, 0));
  dp[0][0] = 1;
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      for (int d = 0; d < 2; d++) {
        int x = j + dx[d], y = i + dy[d];
        if (x < 0 || x >= a || y < 0 || y >= b) {
          continue;
        }
        if (st.count(make_pair(x, y))) {
          continue;
        }
        dp[y][x] += dp[i][j];
      }
    }
  }
  cout << dp[b - 1][a - 1] << endl;
  return 0;
}

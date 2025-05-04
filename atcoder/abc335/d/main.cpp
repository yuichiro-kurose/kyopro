// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, 1, 0, -1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> ans(n + 2, vector<int>(n + 2, -1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      ans[i][j] = 0;
    }
  }
  int x = 1, y = 1;
  int d = 0;
  for (int now = 1; now <= n * n - 1; now++) {
    ans[x][y] = now;
    if (ans[x + dx[d]][y + dy[d]] != 0) {
      d = (d + 1) % 4;
    }
    x += dx[d];
    y += dy[d];
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j > 0) {
        cout << ' ';
      }
      if (i == (n + 1) / 2 && j == (n + 1) / 2) {
        cout << 'T';
      } else {
        cout << ans[i][j];
      }
    }
    cout << endl;
  }
  return 0;
}

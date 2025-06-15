// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> xy(1501, vector<int>(1501, 0));
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    xy[x][y]++;
  }
  for (int i = 1; i <= 1500; i++) {
    for (int j = 0; j <= 1500; j++) {
      xy[i][j] += xy[i - 1][j];
    }
  }
  for (int i = 0; i <= 1500; i++) {
    for (int j = 1; j <= 1500; j++) {
      xy[i][j] += xy[i][j - 1];
    }
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << xy[c][d] - xy[a - 1][d] - xy[c][b - 1] + xy[a - 1][b - 1] << endl;
  }
  return 0;
}

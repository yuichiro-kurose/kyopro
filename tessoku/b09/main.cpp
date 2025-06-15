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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    xy[a][b]++;
    xy[a][d]--;
    xy[c][b]--;
    xy[c][d]++;
  }
  for (int i = 1; i < 1500; i++) {
    for (int j = 0; j < 1500; j++) {
      xy[i][j] += xy[i - 1][j];
    }
  }
  for (int i = 0; i < 1500; i++) {
    for (int j = 1; j < 1500; j++) {
      xy[i][j] += xy[i][j - 1];
    }
  }
  int ans = 0;
  for (int i = 0; i < 1500; i++) {
    for (int j = 0; j < 1500; j++) {
      if (xy[i][j] > 0) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<int> row(h, 0), col(w, 0);
  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
      row[i] += a[i][j];
      col[j] += a[i][j];
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (j > 0) {
        cout << ' ';
      }
      cout << row[i] + col[j] - a[i][j];
    }
    cout << endl;
  }
  return 0;
}

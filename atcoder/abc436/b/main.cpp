// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n, -1));
  int r = 0, c = (n - 1) / 2;
  int k = 1;
  a[r][c] = k;
  for (int i = 0; i < n * n - 1; i++) {
    if (a[(r - 1 + n) % n][(c + 1) % n] == -1) {
      r = (r - 1 + n) % n;
      c = (c + 1) % n;
    } else {
      r = (r + 1) % n;
    }
    k++;
    a[r][c] = k;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j > 0) {
        cout << ' ';
      }
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}

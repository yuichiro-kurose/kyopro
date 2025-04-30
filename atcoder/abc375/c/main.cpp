// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<char>> b(n, vector<char>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char a;
      cin >> a;
      int k = min({i + 1, j + 1, (n - i), (n - j)});
      k %= 4;
      int x = i, y = j;
      while (k--) {
        int nx = y, ny = n - 1 - x;
        x = nx;
        y = ny;
      }
      b[x][y] = a;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << b[i][j];
    }
    cout << endl;
  }
  return 0;
}

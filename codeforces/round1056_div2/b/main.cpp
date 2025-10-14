// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a = n * n - k;
    vector<vector<char>> ans(n, vector<char>(n));
    bool f = true;
    for (int i = 0; i < n; i++) {
      if (a >= 2) {
        ans[i][0] = 'R';
        ans[i][1] = 'L';
        a -= 2;
      } else if (a == 1 && i > 0) {
        ans[i][0] = 'U';
        ans[i][1] = 'R';
        a--;
      } else if (a == 0) {
        ans[i][0] = 'R';
        ans[i][1] = 'R';
      } else {
        f = false;
      }
      for (int j = 2; j < n; j++) {
        if (a > 0) {
          ans[i][j] = 'L';
          a--;
        } else {
          ans[i][j] = 'R';
        }
      }
    }
    if (f) {
      cout << "Yes" << endl;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          cout << ans[i][j];
        }
        cout << endl;
      }
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}

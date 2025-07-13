// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  int m = inf;
  for (int i = 0; i < n; i++) {
    for (int c = 0; c < 3; c++) {
      int l = i, r = i;
      int color = c;
      int len = n;
      while (true) {
        int cnt;
        if (l == r) {
          cnt = 1;
        } else {
          cnt = 0;
        }
        while (l - 1 >= 0 && a[l - 1] == color) {
          l--;
          cnt++;
        }
        while (r + 1 < n && a[r + 1] == color) {
          r++;
          cnt++;
        }
        if (cnt < 4) {
          break;
        }
        len -= cnt;
        if (l - 1 < 0 || r + 1 >= n || a[l - 1] != a[r + 1]) {
          break;
        }
        color = a[l - 1];
      }
      m = min(m, len);
    }
  }
  cout << m << endl;
  return 0;
}

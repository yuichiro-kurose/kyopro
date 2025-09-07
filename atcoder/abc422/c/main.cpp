// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    int lb = 0, ub = inf;
    while (ub - lb > 1) {
      int mid = (lb + ub) / 2;
      int x = a - mid, y = c - mid, z = b + x + y;
      if (x < 0 || y < 0 || z < mid) {
        ub = mid;
      } else {
        lb = mid;
      }
    }
    cout << lb << endl;
  }
  return 0;
}

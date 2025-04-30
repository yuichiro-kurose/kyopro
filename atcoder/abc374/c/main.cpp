// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> k(n);
  for (int i = 0; i < n; i++) {
    cin >> k[i];
  }
  int ans = inf;
  for (int i = 0; i < 1 << n; i++) {
    int a = 0, b = 0;
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        a += k[j];
      } else {
        b += k[j];
      }
    }
    ans = min(ans, max(a, b));
  }
  cout << ans << endl;
  return 0;
}

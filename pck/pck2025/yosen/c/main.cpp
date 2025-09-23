// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a = 0;
    for (int j = 0; j < m; j++) {
      int h;
      cin >> h;
      a = max(a, h);
    }
    ans += a;
  }
  cout << ans << endl;
  return 0;
}

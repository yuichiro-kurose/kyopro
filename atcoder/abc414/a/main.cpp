// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l, r;
  cin >> n >> l >> r;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (x <= l && r <= y) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

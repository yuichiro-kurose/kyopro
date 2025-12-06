// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n + 1), sum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    sum[i] = sum[i - 1] + a[i];
  }
  int ans = 0;
  for (int l = 1; l <= n; l++) {
    for (int r = l; r <= n; r++) {
      bool f = true;
      for (int i = l; i <= r; i++) {
        if ((sum[r] - sum[l - 1]) % a[i] == 0) {
          f = false;
        }
      }
      if (f) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

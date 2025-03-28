// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  long long ans = 0;
  int r = 0;
  for (int l = 1; l <= n; l++) {
    while (r + 1 <= n && a[r + 1] - a[l - 1] <= k) {
      r++;
    }
    ans += r - l + 1;
  }
  cout << ans << endl;
  return 0;
}

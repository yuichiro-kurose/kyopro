// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long ans = 0;
  for (int i = 0; i < n - 1; i++) {
    ans += a[i] / 3;
    a[i] %= 3;
    if (a[i] > 0 && a[i + 1] >= 3 - a[i]) {
      ans++;
      a[i + 1] -= 3 - a[i];
    }
  }
  ans += a[n - 1] / 3;
  cout << ans << endl;
  return 0;
}

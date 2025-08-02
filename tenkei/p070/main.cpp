// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  int px = x[n / 2], py = y[n / 2];
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    ans += ((long long) abs(px - x[i]) + (long long) abs(py - y[i]));
  }
  cout << ans << endl;
  return 0;
}

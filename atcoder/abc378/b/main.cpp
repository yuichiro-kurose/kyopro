// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> q(n), r(n);
  for (int i = 0; i < n; i++) {
    cin >> q[i] >> r[i];
  }
  int q2;
  cin >> q2;
  while (q2--) {
    int t, d;
    cin >> t >> d;
    t--;
    int ans;
    if (d % q[t] <= r[t]) {
      ans = d + r[t] - d % q[t];
    } else {
      ans = d + r[t] + q[t] - d % q[t];
    }
    cout << ans << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, d;
  cin >> n >> d;
  vector<int> t(n), l(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i] >> l[i];
  }
  for (int k = 1; k <= d; k++) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans = max(ans, t[i] * (l[i] + k));
    }
    cout << ans << endl;
  }
  return 0;
}

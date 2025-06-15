// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<long long> r(n);
  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }
  sort(r.begin(), r.end());
  for (int i = 1; i < n; i++) {
    r[i] += r[i - 1];
  }
  while (q--) {
    long long x;
    cin >> x;
    int ans = upper_bound(r.begin(), r.end(), x) - r.begin();
    cout << ans << endl;
  }
  return 0;
}

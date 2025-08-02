// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    int r = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
      while (r + 1 < n && a[i] + b[r] < m) {
        r++;
      }
      if (r < n && a[i] + b[r] >= m) {
        cnt++;
      }
      r++;
    }
    long long ans = (long long) m * cnt * (-1);
    for (int i = 0; i < n; i++) {
      ans += a[i] + b[i];
    }
    cout << ans << endl;
  }
  return 0;
}

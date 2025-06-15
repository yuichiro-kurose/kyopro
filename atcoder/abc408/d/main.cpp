// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n + 1, 0), b(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      a[i] += a[i - 1];
      b[i] += b[i - 1];
      if (s[i - 1] == '0') {
        a[i]++;
      } else {
        b[i]++;
      }
    }
    vector<int> c(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      c[i] = a[i] - b[i];
    }
    int mx = 0, ans = inf;
    for (int r = 0; r <= n; r++) {
      mx = max(mx, c[r]);
      ans = min(ans, c[r] - mx + b[n]);
    }
    cout << ans << endl;
  }
  return 0;
}

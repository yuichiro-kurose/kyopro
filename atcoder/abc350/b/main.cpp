// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<bool> f(n, true);
  while (q--) {
    int t;
    cin >> t;
    t--;
    f[t] = !f[t];
  }
  int ans = 0;
  for (bool x : f) {
    if (x) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<int> a(n);
  int mx = 0, idx;
  rep(i, n) {
    cin >> a[i];
    if (a[i] > mx) {
      mx = a[i];
      idx = i;
    }
  }
  int ans1 = 0;
  rep(i, idx) ans1 += a[i];
  cout << ans1 << endl;
  int ans2 = 0;
  for (int i = idx + 1; i < n; i++) ans2 += a[i];
  cout << ans2 << endl;
  return 0;
}

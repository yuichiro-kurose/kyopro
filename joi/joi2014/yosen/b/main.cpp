// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> cnt(n, 0);
  rep(i, m) {
    int b; cin >> b;
    rep(j, n) if (a[j] <= b) {
      cnt[j]++;
      break;
    }
  }
  int ans, mx = 0;
  rep(i, n) if (cnt[i] > mx) {
    ans = i + 1;
    mx = cnt[i];
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> w(n + 1), h(n + 1), b(n + 1);
  ll sum = 0;
  for (int i = 1; i <= n; i++) {
    cin >> w[i] >> h[i] >> b[i];
    sum += w[i];
  }
  ll ans = 0;
  vector<ll> dp0(250001, -INF), dp1(250001, -INF);
  dp0[0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= 250000; j++) {
      if (j - w[i] >= 0) {
        dp1[j] = max(dp0[j] + b[i], dp0[j - w[i]] + h[i]);
      } else {
        dp1[j] = dp0[j] + b[i];
      }
    }
    swap(dp0, dp1);
  }
  for (int i = 0; i <= 250000; i++) {
    if (i + i <= sum) {
      ans = max(ans, dp0[i]);
    }
  }
  cout << ans << endl;
  return 0;
}

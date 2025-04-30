// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long ans = inf;
  for (int i = 0; i < 1 << n; i++) {
    if (__builtin_popcount(i) != k) {
      continue;
    }
    int mx = 0;
    long long cost = 0;
    for (int j = 0; j < n; j++) {
      if (((i >> j) & 1) && mx >= a[j]) {
        cost += mx + 1 - a[j];
        mx++;
      }
      mx = max(mx, a[j]);
    }
    ans = min(ans, cost);
  }
  cout << ans << endl;
  return 0;
}

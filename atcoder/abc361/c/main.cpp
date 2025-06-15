// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  int ans = inf;
  for (int i = 0; i < k + 1; i++) {
    ans = min(ans, a[i] - a[n - 1 - (k - i)]);
  }
  cout << ans << endl;
  return 0;
}

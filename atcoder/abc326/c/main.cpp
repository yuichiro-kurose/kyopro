// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int ans = 0;
  for (int l = 0; l < n; l++) {
    int r = lower_bound(a.begin(), a.end(), a[l] + m) - a.begin();
    ans = max(ans, r - l);
  }
  cout << ans << endl;
  return 0;
}

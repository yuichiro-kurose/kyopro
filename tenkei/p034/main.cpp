// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  int r = 0;
  map<int, int> mp;
  for (int l = 0; l < n; l++) {
    while (r < n) {
      int p = 1;
      if (mp.count(a[r])) {
        p = 0;
      }
      if (mp.size() + p > k) {
        break;
      }
      mp[a[r]]++;
      r++;
    }
    ans = max(ans, r - l);
    mp[a[l]]--;
    if (mp[a[l]] == 0) {
      mp.erase(a[l]);
    }
  }
  cout << ans << endl;
  return 0;
}

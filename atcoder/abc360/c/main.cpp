// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int w;
    cin >> w;
    ans += w;
    mp[a[i]] = max(mp[a[i]], w);
  }
  for (auto p : mp) {
    ans -= p.second;
  }
  cout << ans << endl;
  return 0;
}

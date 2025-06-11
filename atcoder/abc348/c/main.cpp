// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int a, c;
    cin >> a >> c;
    if (mp.count(c)) {
      mp[c] = min(mp[c], a);
    } else {
      mp[c] = a;
    }
  }
  int ans = 0;
  for (auto p : mp) {
    ans = max(ans, p.second);
  }
  cout << ans << endl;
  return 0;
}

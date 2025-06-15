// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<long long, int> mp;
  for (int i = 0; i < n; i++) {
    int s, c;
    cin >> s >> c;
    mp[s] = c;
  }
  int ans = 0;
  for (auto p : mp) {
    ans += p.second % 2;
    mp[p.first * 2] += p.second / 2;
  }
  cout << ans << endl;
  return 0;
}

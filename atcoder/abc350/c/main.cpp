// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
    mp[a[i]] = i;
  }
  vector<pair<int, int>> ans;
  for (int i = 0; i < n - 1; i++) {
    int s = i, t = mp[i];
    if (s == t) {
      continue;
    }
    ans.push_back(make_pair(s + 1, t + 1));
    mp[s] = s;
    mp[a[s]] = t;
    swap(a[s], a[t]);
  }
  cout << ans.size() << endl;
  for (auto p : ans) {
    cout << p.first << ' ' << p.second << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]].push_back(i);
  }
  vector<int> ans(n);
  int pos = 0;
  while (pos < n) {
    int color = a[pos];
    while (pos < n && pos <= mp[color].back()) {
      ans[pos] = color;
      pos++;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}

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
  vector<int> b;
  int l = 0, r = 0;
  while (l < n && r < n) {
    while (r + 1 < n && a[r] != a[r + 1]) {
      r++;
    }
    b.push_back(r - l + 1);
    l = r + 1;
    r = l;
  }
  b.push_back(0);
  b.push_back(0);
  int ans = 0;
  for (int i = 0; i < b.size() - 2; i++) {
    ans = max(ans, b[i] + b[i + 1] + b[i + 2]);
  }
  cout << ans << endl;
  return 0;
}

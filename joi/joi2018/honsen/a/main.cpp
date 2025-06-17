// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  vector<int> d;
  for (int i = 0; i < n - 1; i++) {
    d.push_back(t[i + 1] - t[i] - 1);
  }
  sort(d.begin(), d.end());
  int ans = n;
  for (int i = 0; i < n - k; i++) {
    ans += d[i];
  }
  cout << ans << endl;
  return 0;
}

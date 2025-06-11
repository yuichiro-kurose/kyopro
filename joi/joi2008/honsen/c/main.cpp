// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  p.push_back(0);
  vector<int> a, b;
  for (int x : p) {
    for (int y : p) {
      a.push_back(x + y);
      b.push_back(x + y);
    }
  }
  sort(a.begin(), a.end());
  int ans = 0;
  for (int x : b) {
    if (x > m) {
      continue;
    }
    auto itr = upper_bound(a.begin(), a.end(), m - x);
    int y = *(itr - 1);
    ans = max(ans, x + y);
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<long long> pow2(62, 1);
  for (int i = 1; i <= 61; i++) {
    pow2[i] = pow2[i - 1] * 2;
  }
  long long l, r;
  cin >> l >> r;
  long long p = l, q = l;
  vector<pair<long long, long long>> ans;
  while (q < r) {
    int n = 0;
    while (p % pow2[n + 1] == 0 && p + pow2[n + 1] <= r) {
      n++;
    }
    q = p + pow2[n];
    ans.push_back(make_pair(p, q));
    p = q;
  }
  cout << ans.size() << endl;
  for (auto p : ans) {
    cout << p.first << ' ' << p.second << endl;
  }
  return 0;
}

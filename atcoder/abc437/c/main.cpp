// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> w(n), p(n);
    vector<tuple<int, int, int>> tup(n);
    long long sum_w = 0, sum_p = 0;
    for (int i = 0; i < n; i++) {
      cin >> w[i] >> p[i];
      tup[i] = make_tuple(w[i] + p[i], w[i], p[i]);
      sum_p += p[i];
    }
    sort(tup.begin(), tup.end());
    int ans = 0;
    for (auto [x, y, z] : tup) {
      if (sum_w + y > sum_p - z) {
        break;
      }
      sum_w += y;
      sum_p -= z;
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}

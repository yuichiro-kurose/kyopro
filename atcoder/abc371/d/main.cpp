// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n + 2);
  x[0] = -inf;
  for (int i = 1; i <= n; i++) {
    cin >> x[i];
  }
  x[n + 1] = inf;
  vector<long long> p(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> p[i];
    p[i] += p[i - 1];
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    int a = lower_bound(x.begin(), x.end(), l) - x.begin() - 1;
    int b = upper_bound(x.begin(), x.end(), r) - x.begin() - 1;
    cout << p[b] - p[a] << endl;
  }
  return 0;
}

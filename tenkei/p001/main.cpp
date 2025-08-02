// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l, k;
  cin >> n >> l >> k;
  vector<int> a(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  a[n] = l;
  vector<int> b(n + 1);
  b[0] = a[0];
  for (int i = 1; i <= n; i++) {
    b[i] = a[i] - a[i - 1];
  }
  auto f = [&](int x) -> bool {
    int cnt = 0, now = 0;
    for (int i = 0; i <= n; i++) {
      now += b[i];
      if (now >= x) {
        cnt++;
        now = 0;
      }
    }
    return cnt > k;
  };
  int lb = 0, ub = inf;
  while (ub - lb > 1) {
    int m = (lb + ub) / 2;
    if (f(m)) {
      lb = m;
    } else {
      ub = m;
    }
  }
  cout << lb << endl;
  return 0;
}

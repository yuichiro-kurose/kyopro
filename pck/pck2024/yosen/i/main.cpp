// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> h(n), d(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }
  auto f = [&](long long x) -> long long {
    long long ret = 0;
    for (int i = 0; i < n; i++) {
      ret += abs(h[i] - (d[i] + x));
    }
    return ret;
  };
  long long l = 0, r = 1e9;
  while (r - l > 2) {
    long long c1 = (l * 2 + r) / 3, c2 = (l + r * 2) / 3;
    if (f(c1) <= f(c2)) {
      r = c2;
    }
    if (f(c1) >= f(c2)) {
      l = c1;
    }
  }
  cout << min({f(l), f(l + 1), f(l + 2)}) << endl;
  return 0;
}

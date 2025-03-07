// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> h(n), s(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i] >> s[i];
  }
  auto judge = [&](long long x) -> bool {
    vector<long long> lim(n);
    for (int i = 0; i < n; i++) {
      if (x - h[i] < 0) {
        return false;
      }
      lim[i] = (x - h[i]) / s[i];
    }
    sort(lim.begin(), lim.end());
    for (int i = 0; i < n; i++) {
      if (lim[i] < i) {
        return false;
      }
    }
    return true;
  };
  long long l = 0, r = inf;
  while (l + 1 < r) {
    long long m = (l + r) / 2;
    if (judge(m)) {
      r = m;
    } else {
      l = m;
    }
  }
  cout << r << endl;
  return 0;
}

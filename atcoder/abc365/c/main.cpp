// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  long long m;
  cin >> n >> m;
  vector<long long> a(n);
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  if (sum <= m) {
    cout << "infinite" << endl;
    return 0;
  }
  long long l = 0, r = inf;
  while (l + 1 < r) {
    long long x = (l + r) / 2;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      sum += min(x, a[i]);
    }
    if (sum <= m) {
      l = x;
    } else {
      r = x;
    }
  }
  cout << l << endl;
  return 0;
}

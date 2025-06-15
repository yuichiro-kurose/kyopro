// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 4;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, m, k;
  cin >> n >> m >> k;
  long long t = lcm(n, m);
  long long lb = 0, ub = inf;
  while (ub - lb >= 1) {
    long long mid = (lb + ub) / 2;
    long long a = mid / n;
    long long b = mid / m;
    long long c = mid / t;
    long long x = a + b - c * 2;
    if (x < k) {
      lb = mid + 1;
    } else {
      ub = mid;
    }
  }
  cout << ub << endl;
  return 0;
}

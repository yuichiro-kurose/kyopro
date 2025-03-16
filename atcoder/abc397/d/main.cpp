// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b, long long c) {
  long long ly = 1, ry = 1000000000;
  while (ly + 1 < ry) {
    long long y = (ly + ry) / 2;
    if (a * y * y + b * y + c <= 0) {
      ly = y;
    } else {
      ry = y;
    }
  }
  if (a * ly * ly + b * ly + c == 0) {
    return ly;
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  for (long long t = 1; t * t * t < n; t++) {
    if (n % t != 0) {
      continue;
    }
    long long y = solve(3, 3 * t, t * t - n / t);
    if (y > 0) {
      cout << t + y << ' ' << y << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}

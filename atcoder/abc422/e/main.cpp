// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  mt19937_64 rng(58);
  for (int t = 0; t < 100; t++) {
    int i, j;
    do {
      i = rng() % n;
      j = rng() % n;
    } while (i == j);
    long long a = y[i] - y[j], b = x[j] - x[i], c = x[i] * y[j] - x[j] * y[i];
    int cnt = 0;
    for (int k = 0; k < n; k++) {
      if (a * x[k] + b * y[k] + c == 0) {
        cnt++;
      }
    }
    if (cnt > n / 2) {
      cout << "Yes" << endl;
      cout << a << ' ' << b << ' ' << c << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

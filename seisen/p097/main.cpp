// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, m;
  cin >> n >> m;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] /= 2;
  }
  int p = 0;
  for (int i = 0; i < n; i++) {
    long long tmp = a[i];
    if (i == 0) {
      while (tmp % 2 == 0) {
        p++;
        tmp /= 2;
      }
    } else {
      int cnt = 0;
      while (tmp % 2 == 0) {
        cnt++;
        tmp /= 2;
      }
      if (cnt != p) {
        cout << 0 << endl;
        return 0;
      }
    }
  }
  long long l = a[0];
  for (int i = 1; i < n; i++) {
    l = l * (a[i] / gcd(l, a[i]));
  }
  cout << (m / l + 1) / 2 << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n + 1);
  vector<int> x(n + 1, 0), y(n + 1, 0), z(n + 1, 0);
  long long ans = 1;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    x[i] = x[i - 1];
    y[i] = y[i - 1];
    z[i] = z[i - 1];
    int cnt = 0;
    if (x[i] == a[i]) {
      cnt++;
    }
    if (y[i] == a[i]) {
      cnt++;
    }
    if (z[i] == a[i]) {
      cnt++;
    }
    ans = (ans * cnt) % mod;
    if (x[i] == a[i]) {
      x[i]++;
    } else if (y[i] == a[i]) {
      y[i]++;
    } else if (z[i] == a[i]) {
      z[i]++;
    }
  }
  cout << ans << endl;
  return 0;
}

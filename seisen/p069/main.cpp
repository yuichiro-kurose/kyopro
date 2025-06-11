// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int n = 100000;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<bool> f(n + 1, true);
  f[0] = false;
  f[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (f[i]) {
      for (int j = i + i; j <= n; j += i) {
        f[j] = false;
      }
    }
  }
  vector<int> sum(n + 1, 0);
  for (int i = 2; i <= n; i++) {
    sum[i] += sum[i - 1];
    if ((i & 1) && f[i] && f[i / 2 + 1]) {
      sum[i]++;
    }
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << sum[r] - sum[l - 1] << endl;
  }
  return 0;
}

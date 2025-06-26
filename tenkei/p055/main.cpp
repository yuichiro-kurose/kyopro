// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, p, q;
  cin >> n >> p >> q;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long ans = 0;
  for (int i = 0; i < n - 4; i++) {
    for (int j = i + 1; j < n - 3; j++) {
      for (int k = j + 1; k < n - 2; k++) {
        for (int l = k + 1; l < n - 1; l++) {
          for (int m = l + 1; m < n; m++) {
            long long x = a[i] * a[j] % p * a[k] % p * a[l] % p * a[m] % p;
            if (x == q) {
              ans++;
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}

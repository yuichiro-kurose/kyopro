// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> cnt(m, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i > 0) {
      a[i] += a[i - 1];
    }
    a[i] %= m;
    cnt[a[i]]++;
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    cnt[a[i]]--;
    ans += cnt[(m + a[i]) % m];
    cnt[(a[i] + a[n - 1]) % m]++;
  }
  cout << ans << endl;
  return 0;
}

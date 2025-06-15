// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int>  p(m), a(n), b(n), c(n);
  for (int i = 0; i < m; i++) {
    cin >> p[i];
  }
  for (int i = 1; i <= n - 1; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }
  vector<int> cnt(n + 1, 0);
  for (int i = 0; i < m - 1; i++) {
    if (p[i] < p[i + 1]) {
      cnt[p[i]]++;
      cnt[p[i + 1]]--;
    } else {
      cnt[p[i + 1]]++;
      cnt[p[i]]--;
    }
  }
  long long ans = 0;
  for (int i = 1; i <= n - 1; i++) {
    cnt[i] += cnt[i - 1];
    ans += min((long long) a[i] * cnt[i], (long long) b[i] * cnt[i] + c[i]);
  }
  cout << ans << endl;
  return 0;
}

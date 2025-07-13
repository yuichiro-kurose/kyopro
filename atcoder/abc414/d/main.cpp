// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<long long> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  sort(x.begin(), x.end());
  vector<long long> d(n - 1);
  for (int i = 0; i < n - 1; i++) {
    d[i] = x[i + 1] - x[i];
  }
  sort(d.begin(), d.end());
  long long ans = 0;
  for (int i = 0; i < n - m; i++) {
    ans += d[i];
  }
  cout << ans << endl;
  return 0;
}

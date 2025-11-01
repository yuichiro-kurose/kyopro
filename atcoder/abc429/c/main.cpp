// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  vector<long long> cnt(n + 1, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += (cnt[i] * (cnt[i] - 1) / 2) * (n - cnt[i]);
  }
  cout << ans << endl;
  return 0;
}

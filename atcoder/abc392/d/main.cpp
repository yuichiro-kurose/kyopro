// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> k(n);
  vector<vector<int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> k[i];
    a[i].resize(k[i]);
    for (int j = 0; j < k[i]; j++) {
      cin >> a[i][j];
    }
  }
  double ans = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      double now = 0;
      map<int, int> cnt;
      for (int x : a[j]) {
        cnt[x]++;
      }
      for (int x : a[i]) {
        now += cnt[x];
      }
      now /= k[i];
      now /= k[j];
      ans = max(ans, now);
    }
  }
  cout << fixed << setprecision(9) << ans << endl;
  return 0;
}

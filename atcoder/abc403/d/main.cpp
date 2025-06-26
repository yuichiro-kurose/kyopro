// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, d;
  cin >> n >> d;
  vector<int> cnt(1000001, 0);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  int ans = 0;
  if (d == 0) {
    for (int i = 0; i <= 1000000; i++) {
      ans += max(0, cnt[i] - 1);
    }
  } else {
    ans = n;
    for (int i = 0; i < d; i++) {
      int dp1 = 0, dp2 = 0;
      for (int j = i; j <= 1000000; j += d) {
        int tmp = dp1;
        dp1 = dp2 + cnt[j];
        dp2 = max(tmp, dp2);
      }
      ans -= max(dp1, dp2);
    }
  }
  cout << ans << endl;
  return 0;
}

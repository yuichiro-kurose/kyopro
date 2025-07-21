// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 1; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 2; i < n; i++) {
    cin >> b[i];
  }
  vector<int> dp(n);
  dp[0] = 0;
  for (int i = 1; i < n; i++) {
    if (i == 1) {
      dp[i] = a[i];
    } else {
      dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
    }
  }
  int now = n - 1;
  vector<int> ans;
  ans.push_back(n - 1);
  while (now > 0) {
    if (dp[now] == dp[now - 1] + a[now]) {
      now--;
    } else {
      now -= 2;
    }
    ans.push_back(now);
  }
  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i] + 1;
  }
  cout << endl;
  return 0;
}

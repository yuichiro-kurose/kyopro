// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);
  for (int i = 2; i < n; i++) {
    dp[i] = min(dp[i - 1] + abs(h[i - 1] - h[i]), dp[i - 2] + abs(h[i - 2] - h[i]));
  }
  vector<int> ans;
  int now = n - 1;
  ans.push_back(now);
  while (now > 0) {
    if (dp[now] == dp[now - 1] + abs(h[now - 1] - h[now])) {;
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

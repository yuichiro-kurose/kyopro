// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string t;
  cin >> t;
  int dp0 = 0, dp1 = 0;
  long long ans = 0;
  for (char c : t) {
    int x = dp0, y = dp1;
    if (c == '0') {
      dp0 = y;
      dp1 = x + 1;
    } else {
      dp0 = x + 1;
      dp1 = y;
    }
    ans += dp0;
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

long long Pow(long long a, long long b) {
  long long ret = 1;
  while (b > 0) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
    b >>= 1;
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k;
  cin >> k;
  if (k % 9 != 0) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> dp(k + 1, 0);
  dp[0] = 1;
  for (int i = 1; i <= k; i++) {
    for (int j = 1; j <= 9 && i - j >= 0; j++) {
      dp[i] = (dp[i] + dp[i - j]) % mod;
    }
  }
  cout << dp[k] << endl;
  return 0;
}

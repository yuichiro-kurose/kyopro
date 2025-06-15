// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  long long dp0 = 0, dp1 = -inf;
  while (n--) {
    int a;
    cin >> a;
    long long tmp = dp0;
    dp0 = max(dp0, dp1 + a + a);
    dp1 = max(tmp + a, dp1);
  }
  cout << max(dp0, dp1) << endl;
  return 0;
}

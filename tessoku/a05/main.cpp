// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (1 <= k - i - j && k - i - j <= n) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

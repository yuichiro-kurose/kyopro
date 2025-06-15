// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> w(n), x(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i] >> x[i];
  }
  int ans = 0;
  for (int h = 0; h < 24; h++) {
    int now = 0;
    for (int i = 0; i < n; i++) {
      int a = (x[i] + h) % 24;
      if (9 <= a && a + 1 <= 18) {
        now += w[i];
      }
    }
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}

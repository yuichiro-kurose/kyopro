// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, c;
  cin >> n >> c;
  int ans = 0, time = 0;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    if (t - time >= c || i == 0) {
      ans++;
      time = t;
    }
  }

  cout << ans << endl;
  return 0;
}

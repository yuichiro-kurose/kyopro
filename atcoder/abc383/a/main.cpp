// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 0, time = 0;
  while (n--) {
    int t, v;
    cin >> t >> v;
    ans = max(0, ans - (t - time));
    ans += v;
    time = t;
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  long long ans = 0, mn = inf;
  while (n--) {
    int a;
    cin >> a;
    ans += a;
    mn = min(mn, ans);
  }
  if (mn < 0) {
    ans -= mn;
  }
  cout << ans << endl;
  return 0;
}

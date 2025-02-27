// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  int x = 0, now = 0, ans = 0;
  rep(i, n) {
    int a; cin >> a;
    if (x > a) now = 1;
    else now++;
    x = a;
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}

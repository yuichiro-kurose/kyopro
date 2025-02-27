// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  int ans = 0, now = 0;
  rep(i, n) {
    int a; cin >> a;
    if (a == 0) now = 0;
    else now++;
    ans = max(ans, now + 1);
  }
  cout << ans << endl;
  return 0;
}

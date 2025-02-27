// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int ans = 0;
  rep(i, 5) {
    int a; cin >> a;
    ans += max(a, 40);
  }
  ans /= 5;
  cout << ans << endl;
  return 0;
}

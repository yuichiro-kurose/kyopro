// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int ans; cin >> ans;
  rep(i, 9) {
    int a; cin >> a;
    ans -= a;
  }
  cout << ans << endl;
  return 0;
}

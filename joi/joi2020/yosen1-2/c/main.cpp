// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<int> b(m, 0);
  int ans = 0;
  rep(i, n) {
    int a; cin >> a;
    a--;
    b[a]++;
  }
  rep(i, m) ans = max(ans, b[i]);
  cout << ans << endl;
  return 0;
}

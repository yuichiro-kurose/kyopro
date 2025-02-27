// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  int m; cin >> m;
  rep(i, m) {
    int a; cin >> a;
    a--;
    if (x[a] == 2019 || a + 1 < n && x[a] + 1 == x[a + 1]) continue;
    x[a]++;
  }
  rep(i, n) cout << x[i] << endl;
  return 0;
}

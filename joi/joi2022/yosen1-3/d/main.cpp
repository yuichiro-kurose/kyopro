// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<int> a(n);
  rep(i, n) a[i] = i;
  rep(i, m) {
    int x, y; cin >> x >> y;
    a[x - 1] = y - 1;
  }
  rep(i, n) cout << a[i] + 1 << endl;
  return 0;
}

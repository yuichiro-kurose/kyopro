// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  vector<int> c;
  auto f = [&](vector<int>& t) {
    c.push_back(t[0]);
    t.erase(t.begin());
  };
  while (!a.empty() || !b.empty()) {
    if (b.empty()) f(a);
    else if (a.empty()) f(b);
    else if (a[0] <= b[0]) f(a);
    else f(b);
  }
  for (int x : c) cout << x << endl;
  return 0;
}

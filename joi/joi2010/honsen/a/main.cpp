// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1e5;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> s(n, 0);
  for (int i = 1; i < n; i++) {
    cin >> s[i];
    s[i] += s[i - 1];
  }
  int p = 0, ans = 0;
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    ans = (ans + abs(s[p] - s[p + a])) % mod;
    p += a;
  }
  cout << ans << endl;
  return 0;
}

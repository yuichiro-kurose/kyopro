// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> cnt(n + 1, 0);
  int ans = 0, mx = 0;
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    cnt[a]++;
    if (mx < cnt[a] || mx == cnt[a] && ans > a) {
      ans = a;
      mx = cnt[a];
    }
    cout << ans << endl;
  }
  return 0;
}

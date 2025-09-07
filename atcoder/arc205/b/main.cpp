// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> cnt(n, n - 1);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    cnt[u - 1]--;
    cnt[v - 1]--;
  }
  int odd_cnt = 0;
  for (int i = 0; i < n; i++) {
    if (cnt[i] % 2 == 1) {
      odd_cnt++;
    }
  }
  long long ans = (long long) n * (n - 1) / 2 - (odd_cnt / 2);
  cout << ans << endl;
  return 0;
}

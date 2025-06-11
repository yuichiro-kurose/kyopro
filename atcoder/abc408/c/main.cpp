// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> sum(n + 2, 0);
  for (int i = 0; i < m; i++) {
    int l, r;
    cin >> l >> r;
    sum[l]++;
    sum[r + 1]--;
  }
  int ans = inf;
  for (int i = 1; i <= n; i++) {
    sum[i] += sum[i - 1];
    ans = min(ans, sum[i]);
  }
  cout << ans << endl;
  return 0;
}

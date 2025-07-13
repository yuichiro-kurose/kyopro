// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> cnt(n, 0);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    cnt[max(a, b) - 1]++;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (cnt[i] == 1) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

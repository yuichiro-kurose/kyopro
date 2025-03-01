// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> cnt(n, 0);
  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;
    for (int j = 0; j < n; j++) {
      if (a[j] <= b) {
        cnt[j]++;
        break;
      }
    }
  }
  int ans, mx = 0;
  for (int i = 0; i < n; i++) {
    if (cnt[i] > mx) {
      ans = i + 1;
      mx = cnt[i];
    }
  }
  cout << ans << endl;
  return 0;
}

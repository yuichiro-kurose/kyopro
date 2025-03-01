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
  vector<bool> f(n, true);
  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;
    for (int j = 0; j < n; j++) {
      if (b == a[j]) {
        f[j] = false;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (!f[i]) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

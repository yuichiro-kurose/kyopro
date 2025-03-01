// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k;
  cin >> k;
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int ans = 0;
  for (int p = 0; p < n; p++) {
    for (int q = 0; q < m; q++) {
      if (a[p] + k == b[q]) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

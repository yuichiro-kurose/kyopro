// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
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
  for (int i = 0; i < n; i++) {
    ans += a[i];
    for (int j = 0; j < m; j++) {
      if (ans == b[j]) {
        ans = 0;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

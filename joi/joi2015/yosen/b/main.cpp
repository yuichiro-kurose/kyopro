// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  vector<int> ans(n, 0);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int b;
      cin >> b;
      if (b == a[i]) {
        ans[j]++;
      } else {
        ans[a[i] - 1]++;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}

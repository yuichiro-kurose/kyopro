// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m), c(n + m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    c[i] = a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    c[i + n] = b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  for (int i = 0; i < n + m - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (c[i] == a[j] && c[i + 1] == a[j + 1]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}

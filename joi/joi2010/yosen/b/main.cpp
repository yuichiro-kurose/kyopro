// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  vector<int> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  int p = 1;
  for (int i = 0; i < m; i++) {
    p += a[i];
    if (p >= n) {
      cout << i + 1 << endl;
      return 0;
    }
    p += x[p - 1];
    if (p >= n) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}

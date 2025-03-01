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
    a[i] = i;
  }
  for (int i = 0; i < m; i++) {
    int x, y; cin >> x >> y;
    a[x - 1] = y - 1;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] + 1 << endl;
  }
  return 0;
}

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
  for (int i = 1; i <= n; i++) {
    cout << (*lower_bound(a.begin(), a.end(), i)) - i << endl;
  }
  return 0;
}

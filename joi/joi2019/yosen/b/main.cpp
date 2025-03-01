// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    a--;
    if (x[a] == 2019 || a + 1 < n && x[a] + 1 == x[a + 1]) {
      continue;
    }
    x[a]++;
  }
  for (int i = 0; i < n; i++) {
    cout << x[i] << endl;
  }
  return 0;
}

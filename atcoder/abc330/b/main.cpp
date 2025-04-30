// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a < l) {
      x[i] = l;
    } else if (a > r) {
      x[i] = r;
    } else {
      x[i] = a;
    }
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << x[i];
  }
  cout << endl;
  return 0;
}

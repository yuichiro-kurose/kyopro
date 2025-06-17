// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    int idx = -1;
    for (int i = 1; i < n; i++) {
      if (a[0] * b[i] != a[i] * b[0]) {
        idx = i;
        break;
      }
    }
    if (idx == -1) {
      cout << "No" << endl;
      continue;
    }
    vector<int> x(n, 0);
    if (a[0] * b[idx] < a[idx] * b[0]) {
      x[0] = - (a[idx] + b[idx]);
      x[idx] = a[0] + b[0];
    } else {
      x[0] = a[idx] + b[idx];
      x[idx] = - (a[0] + b[0]);
    }
    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
      if (i > 0) {
        cout << ' ';
      }
      cout << x[i];
    }
    cout << endl;
  }
  return 0;
}

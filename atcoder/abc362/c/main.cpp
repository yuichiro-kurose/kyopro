// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> l(n), r(n);
  long long sl = 0, sr = 0;
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
    sl += l[i];
    sr += r[i];
  }
  if (sl > 0 || sr < 0) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    if (sl + r[i] - l[i] <= 0) {
      x[i] = r[i];
      sl += r[i] - l[i];
    } else {
      x[i] = l[i] -sl;
      sl = 0;
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

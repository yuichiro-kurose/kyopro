// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = n - 2; i >= 0; i--) {
    a[i] = min(a[i], a[i + 1]);
  }
  bool f = true;
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    if (b[i] > a[i]) {
      f = false;
    }
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> b(n);
  for (int i = 0; i < n - 1; i++) {
    b[i] = a[i] * a[i + 1];
  }
  for (int i = 0; i < n - 1; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << b[i];
  }
  cout << endl;
  return 0;
}

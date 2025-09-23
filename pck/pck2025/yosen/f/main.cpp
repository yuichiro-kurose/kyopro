
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
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int x = 0, y = n, l = 0;
  for (int i = 0; i < n && l < n; i++) {
    while (l < n && a[i] > b[l]) {
      l++;
    }
    if (l == n) {
      break;
    }
    x++;
    // cout << i << ' ' << l << endl;
    l++;
  }
  l = 0;
  for (int i = 0; i < n && l < n; i++) {
    while (l < n && b[i] > a[l]) {
      l++;
    }
    if (l == n) {
      break;
    }
    y--;
    // cout << i << ' ' << l << endl;
    l++;
  }
  cout << x - y + 1 << endl;
  for (int i = y; i <= x; i++) {
    if (i > y) {
      cout << ' ';
    }
    cout << i;
  }
  cout << endl;
  return 0;
}

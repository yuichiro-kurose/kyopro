// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<int> b = a;
  vector<int> c(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    c[i] += c[i - 1];
    a[i] += c[i];
    int x = i + a[i];
    if (x >= n) {
      c[i + 1]++;
      b[i] = a[i] - (n - i);
    } else {
      c[i + 1]++;
      c[x + 1]--;
      b[i] = 0;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (i > 1) {
      cout << ' ';
    }
    cout << b[i];
  }
  cout << endl;
  return 0;
}

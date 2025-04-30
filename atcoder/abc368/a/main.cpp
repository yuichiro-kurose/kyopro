// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = n - k; i < n; i++) {
    b.push_back(a[i]);
  }
  for (int i = 0; i < n - k; i++) {
    b.push_back(a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << b[i];
  }
  cout << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int k = 1; k <= m; k++) {
    int i = 0;
    while (i < n - 1) {
      if (a[i] % k > a[i + 1] % k) {
        swap(a[i], a[i + 1]);
      }
      i++;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
  return 0;
}

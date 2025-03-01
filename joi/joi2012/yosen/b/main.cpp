// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n, 0);
  for (int i = 0; i < n * (n - 1) / 2; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a--;
    b--;
    if (c < d) {
      x[b] -= 3;
    }
    if (c == d) {
      x[a]--;
      x[b]--;
    }
    if (c > d) {
      x[a] -= 3;
    }
  }
  vector<int> y = x;
  sort(y.begin(), y.end());
  for (int i = 0; i < n; i++) {
    cout << lower_bound(y.begin(), y.end(), x[i]) - y.begin() + 1 << endl;
  }
  return 0;
}

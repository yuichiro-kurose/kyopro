// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long a, b, k;
  cin >> a >> b >> k;
  if (a > k) {
    cout << a - k << ' ' << b << endl;
  } else if (a + b > k) {
    cout << 0 << ' ' << b - (k - a) << endl;
  } else {
    cout << 0 << ' ' << 0 << endl;
  }
  return 0;
}

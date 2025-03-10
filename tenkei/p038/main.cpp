// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long a, b;
  cin >> a >> b;
  long long x = gcd(a, b);
  if (a / x > (long double) 1e18 / b) {
    cout << "Large" << endl;
  } else {
    cout << a / x * b << endl;
  }
  return 0;
}

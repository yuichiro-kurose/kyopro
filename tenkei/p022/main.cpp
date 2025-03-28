// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long a, b, c;
  cin >> a >> b >> c;
  long long g = gcd(gcd(a, b), c);
  long long ans = a / g + b / g + c / g - 3;
  cout << ans << endl;
  return 0;
}

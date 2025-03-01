// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, d, e, f; 
  cin >> a >> b >> c >> d >> e >> f;
  cout << a + b + c + d + e + f - min({a, b, c, d}) - min(e, f) << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, d, p;
  cin >> a >> b >> c >> d >> p;
  cout << min(p * a, b + max(p - c, 0) * d) << endl;
  return 0;
}

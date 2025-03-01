// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  cout << min({a, b, c}) + min(d, e) - 50 << endl;
  return 0;
}

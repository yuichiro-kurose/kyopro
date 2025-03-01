// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  cout << min((n + a - 1) / a * b, (n + c - 1) / c * d) << endl;
  return 0;
}

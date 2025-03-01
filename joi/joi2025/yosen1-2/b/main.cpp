// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int p, q;
  cin >> p >> q;
  int a, b;
  cin >> a >> b;
  if (p < q) {
    cout << p * a + (q - p) * b << endl;
  } else {
    cout << q * a << endl;
  }
  return 0;
}

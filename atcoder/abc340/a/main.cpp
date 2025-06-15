// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, d;
  cin >> a >> b >> d;
  while (a < b) {
    cout << a << ' ';
    a += d;
  }
  cout << b << endl;
  return 0;
}

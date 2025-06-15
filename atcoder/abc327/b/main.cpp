// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long b;
  cin >> b;
  long long a = 1;
  while (true) {
    long long x = 1;
    for (int i = 0; i < a; i++) {
      x *= a;
    }
    if (x == b) {
      cout << a << endl;
      break;
    }
    if (x > b) {
      cout << -1 << endl;
      break;
    }
    a++;
  }
  return 0;
}

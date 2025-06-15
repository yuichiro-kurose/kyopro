// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  cout << n << ':';
  int div = 2;
  while (div * div <= n) {
    if (n % div == 0) {
      cout << ' ' << div;
      n /= div;
    } else {
      div++;
    }
  }
  cout << ' ' << n << endl;
  return 0;
}

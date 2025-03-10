// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 0;
  int p = 1;
  while (n > 0) {
    if (n % 10 == 1) {
      ans += p;
    }
    p *= 2;
    n /= 10;
  }
  cout << ans << endl;
  return 0;
}

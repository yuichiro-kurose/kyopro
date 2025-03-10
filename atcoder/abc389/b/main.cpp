// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long x;
  cin >> x;
  int ans = 0;
  while (x > 1) {
    ans++;
    x /= ans;
  }
  cout << ans << endl;
  return 0;
}

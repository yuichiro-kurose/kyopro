// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int ans = 0;
  while (!(n & 1)) {
    ans++;
    n /= 2;
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, s, k;
  cin >> n >> s >> k;
  int ans = 0;
  while (n--) {
    int p, q;
    cin >> p >> q;
    ans += p * q;
  }
  if (ans < s) {
    ans += k;
  }
  cout << ans << endl;
  return 0;
}

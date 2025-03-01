// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (i % a == 0 && i % b != 0 || i % a != 0 && i % b == 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

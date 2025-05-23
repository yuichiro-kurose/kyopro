// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int n, x;
    cin >> n >> x;
    if (n == 0 && x == 0) {
      break;
    }
    int ans = 0;
    for (int i = 1; i <= n - 2; i++) {
      for (int j = i + 1; j <= n - 1; j++) {
        for (int k = j + 1; k <= n; k++) {
          if (i + j + k == x) {
            ans++;
          }
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, s, m, l;
  cin >> n >> s >> m >> l;
  int ans = inf;
  for (int i = 0; i * 6 < n + 6; i++) {
    for (int j = 0; j * 8 < n + 8; j++) {
      for (int k = 0; k * 12 < n + 12; k++) {
        if (i * 6 + j * 8 + k * 12 < n) {
          continue;
        }
        ans = min(ans, s * i + m * j + l * k);
      }
    }
  }
  cout << ans << endl;
  return 0;
}

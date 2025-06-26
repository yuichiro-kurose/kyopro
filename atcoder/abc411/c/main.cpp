// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<bool> color(n + 2, false);
  int ans = 0;
  while (q--) {
    int a;
    cin >> a;
    if (color[a]) {
      if (color[a - 1] && color[a + 1]) {
        ans++;
      }
      if (!color[a - 1] && !color[a + 1]) {
        ans--;
      }
    } else {
      if (color[a - 1] && color[a + 1]) {
        ans--;
      }
      if (!color[a - 1] && !color[a + 1]) {
        ans++;
      }
    }
    color[a] = !color[a];
    cout << ans << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  int ans = 1;
  for (int w = 1; w < n; w++) {
    for (int i = 0; i < n; i++) {
      int now = 1;
      for (int p = i + w; p < n; p += w) {
        if (h[i] == h[p]) {
          now++;
        } else {
          break;
        }
      }
      ans = max(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}

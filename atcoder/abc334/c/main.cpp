// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }
  if (!(k & 1)) {
    int ans = 0;
    for (int i = 0; i < k - 1; i += 2) {
      ans += a[i + 1] - a[i];
    }
    cout << ans << endl;
    return 0;
  }
  vector<int> b(k - 1);
  int now = 0;
  for (int i = 0; i < k - 1; i++) {
    b[i] = a[i + 1] - a[i];
    if (i & 1) {
      now += b[i];
    }
  }
  int ans = now;
  int pos = 0;
  while (pos + 1 < k - 1) {
    now += (b[pos] - b[pos + 1]);
    ans = min(ans, now);
    pos += 2;
  }
  cout << ans << endl;
  return 0;
}

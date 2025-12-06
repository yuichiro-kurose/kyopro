// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, y, z, p;
  cin >> x >> y >> z >> p;
  vector<int> a(x), b(y), c(z);
  for (int i = 0; i < x; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < y; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < z; i++) {
    cin >> c[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  int ans = 0;
  for (int i = 0; i < x; i++) {
    int idx = lower_bound(b.begin(), b.end(), p - (a[i] + (c[0] + c[z - 1]) / 2)) - b.begin();
    int score = INF;
    if (idx < y) {
      score = max(abs(a[i] + b[idx] + c[0] - p), abs(a[i] + b[idx] + c[z - 1] - p));
    }
    if (idx > 0) {
      score = min(score, max(abs(a[i] + b[idx - 1] + c[0] - p), abs(a[i] + b[idx - 1] + c[z - 1] - p)));
    }
    ans = max(ans, score);
  }
  cout << ans << endl;
  return 0;
}

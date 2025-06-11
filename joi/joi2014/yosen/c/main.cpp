// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, -1, 0, 1, 1, -1};
const vector<int> dy = {1, 0, -1, 0, 1, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int w, h, n;
  cin >> w >> h >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    if ((x[i] - x[i + 1]) * (y[i] - y[i + 1]) > 0) {
      ans += max(abs(x[i] - x[i + 1]), abs(y[i] - y[i + 1]));
    } else {
      ans += abs(x[i] - x[i + 1]) + abs(y[i] - y[i + 1]);
    }
  }
  cout << ans << endl;
  return 0;
}

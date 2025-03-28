// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  double ans = sqrt(x[0] * x[0] + y[0] * y[0]) + sqrt(x[n - 1] * x[n - 1] + y[n - 1] * y[n - 1]);
  for (int i = 0; i < n - 1; i++) {
    ans += sqrt((x[i] - x[i + 1]) * (x[i] - x[i + 1]) + (y[i] - y[i + 1]) * (y[i] - y[i + 1]));
  }
  cout << fixed << setprecision(9) << ans << endl;
  return 0;
}

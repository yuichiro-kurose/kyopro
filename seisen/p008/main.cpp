// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  long long ans = inf;
  for (int s = 0; s < n; s++) {
    for (int g = 0; g < n; g++) {
      long long now = 0;
      for (int i = 0; i < n; i++) {
        now += abs(a[i] - a[s]) + abs(a[i] - b[i]) + abs(b[i] - b[g]);
      }
      ans = min(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  long long t;
  cin >> n >> t >> q;
  vector<long long> a(n);
  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> d[i];
  }
  vector<long long> stop;
  for (int i = 0; i < n - 1; i++) {
    if (d[i] == 1 && d[i + 1] == 2) {
      stop.push_back((a[i] + a[i + 1]) / 2);
    }
  }
  while (q--) {
    int x;
    cin >> x;
    x--;
    long long ans;
    if (d[x] == 1) {
      int idx = lower_bound(stop.begin(), stop.end(), a[x]) - stop.begin();
      if (idx == stop.size()) {
        ans = a[x] + t;
      } else {
        ans = min(a[x] + t, stop[idx]);
      }
    } else {
      int idx = lower_bound(stop.begin(), stop.end(), a[x]) - stop.begin() - 1;
      if (idx == -1) {
        ans = a[x] - t;
      } else {
        ans = max(a[x] - t, stop[idx]);
      }
    }
    cout << ans << endl;
  }
  return 0;
}

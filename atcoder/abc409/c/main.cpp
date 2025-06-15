// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l;
  cin >> n >> l;
  vector<int> d(n, 0);
  for (int i = 1; i < n; i++) {
    cin >> d[i];
    d[i] = (d[i] + d[i - 1]) % l;
  }
  if (l % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  sort(d.begin(), d.end());
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    cnt[d[i]]++;
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    bool f = binary_search(d.begin(), d.end(), d[i] + l / 3);
    bool g = binary_search(d.begin(), d.end(), d[i] + l / 3 * 2);
    if (f && g) {
      ans += (long long) cnt[d[i] + l / 3] * cnt[d[i] + l / 3 * 2];
    }
  }
  cout << ans << endl;
  // for (int i = 0; i < n; i++) {
  //   cout << d[i] << endl;
  // }
  return 0;
}

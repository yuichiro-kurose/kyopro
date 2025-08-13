// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n + 1);
  vector<long long> cnt(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    cnt[i] = 1;
    while (a[i] % 2 == 0) {
      cnt[i] *= 2;
      a[i] /= 2;
    }
    cnt[i] += cnt[i - 1];
  }
  int q;
  cin >> q;
  while (q--) {
    long long x;
    cin >> x;
    int idx = lower_bound(cnt.begin(), cnt.end(), x) - cnt.begin();
    cout << a[idx] << endl;
  }
  return 0;
}

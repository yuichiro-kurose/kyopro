// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long ans = 0;
  int r = 0;
  for (int l = 0; l < n; l++) {
    while (r + 1 < n && a[r + 1] - a[l] <= k) {
      r++;
    }
    ans += r - l;
  }
  cout << ans << endl;
  return 0;
}

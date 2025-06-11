// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long ans = 1;
  int r = 1;
  for (int l = 0; l < n - 1; l++) {
    if (l == r) {
      r++;
    }
    int d = a[r] - a[r - 1];
    while (r + 1 < n && a[r + 1] - a[r] == d) {
      r++;
    }
    ans += r - l + 1;
  }
  cout << ans << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), b(n - 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    cin >> b[i];
  }
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  int p = 0, ans = 0;
  for (int i = 0; i < n - 1; i++) {
    if (a[p] > b[i]) {
      if (ans != 0) {
        cout << -1 << endl;
        return 0;
      }
      ans = a[p];
      i--;
    }
    p++;
  }
  if (ans == 0) {
    ans = a[n - 1];
  }
  cout << ans << endl;
  return 0;
}

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
  sort(a.begin(), a.end());
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    int ans = lower_bound(a.begin(), a.end(), x) - a.begin();
    cout << ans << endl;
  }
  return 0;
}

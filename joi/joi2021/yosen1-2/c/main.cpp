// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  int mx = 0, idx;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] > mx) {
      mx = a[i];
      idx = i;
    }
  }
  int ans1 = 0;
  for (int i = 0; i < idx; i++) {
    ans1 += a[i];
  }
  cout << ans1 << endl;
  int ans2 = 0;
  for (int i = idx + 1; i < n; i++) {
    ans2 += a[i];
  }
  cout << ans2 << endl;
  return 0;
}

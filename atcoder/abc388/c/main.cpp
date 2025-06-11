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
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    int x = lower_bound(a.begin(), a.end(), a[i] * 2) - a.begin();
    ans += n - x;
  }
  cout << ans << endl;
  return 0;
}

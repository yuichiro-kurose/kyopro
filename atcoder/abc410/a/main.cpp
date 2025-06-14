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
  int k;
  cin >> k;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (k <= a[i]) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}

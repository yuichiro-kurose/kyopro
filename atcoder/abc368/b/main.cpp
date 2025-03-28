// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] > 0) {
      cnt++;
    }
  }
  int ans = 0;
  while (cnt > 1) {
    ans++;
    sort(a.rbegin(), a.rend());
    if (a[0] == 1) {
      cnt--;
    }
    if (a[1] == 1) {
      cnt--;
    }
    a[0]--;
    a[1]--;
  }
  cout << ans << endl;
  return 0;
}

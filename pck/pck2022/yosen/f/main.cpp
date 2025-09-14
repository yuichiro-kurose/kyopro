// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int time = 0;
  int ans = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    time += t;
    if (time <= a[i]) {
      ans++;
      cnt = 0;
      time = a[i];
    } else {
      cnt++;
      if (cnt == 2) {
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

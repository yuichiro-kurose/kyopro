// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  int ans = 0;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    bool f = true;
    for (int j = 0; j < n; j++) {
      if (x[i] - x[j] < y[i] - y[j]) {
        f = false;
      }
    }
    if (f) {
      ans++;
      a.push_back(i + 1);
    }
  }
  cout << ans << endl;
  for (int x : a) {
    cout << x << endl;
  }
  return 0;
}

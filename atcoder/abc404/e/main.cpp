// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> c(n);
  vector<bool> beans(n);
  c[0] = -1;
  beans[0] = false;
  for (int i = 1; i <= n - 1; i++) {
    cin >> c[i];
  }
  for (int i = 1; i <= n - 1; i++) {
    int a;
    cin >> a;
    beans[i] = a;
  }
  int ans = 0;
  for (int i = n - 1; i >= 1; i--) {
    if (!beans[i]) {
      continue;
    }
    ans++;
    bool f = false;
    for (int j = 1; j <= c[i]; j++) {
      if (beans[i - j]) {
        f = true;
      }
    }
    if (f || i == c[i]) {
      continue;
    }
    int mx = 0, idx = 0;
    for (int j = 1; j <= c[i]; j++) {
      if (mx < j + c[i - j]) {
        mx = j + c[i - j];
        idx = i - j;
      }
    }
    beans[idx] = true;
  }
  cout << ans << endl;
  return 0;
}

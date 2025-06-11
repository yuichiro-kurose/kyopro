// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c;
  cin >> a >> b >> c;
  int n;
  cin >> n;
  vector<int> x(n), y(n), z(n), r(n);
  vector<int> ans(a + b + c, 2);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> z[i] >> r[i];
    x[i]--;
    y[i]--;
    z[i]--;
    if (r[i] == 1) {
      ans[x[i]] = 1;
      ans[y[i]] = 1;
      ans[z[i]] = 1;
    }
  }
  for (int i = 0; i < n; i++) {
    if (ans[x[i]] == 2 && ans[y[i]] == 1 && ans[z[i]] == 1) {
      ans[x[i]] = 0;
    }
    if (ans[x[i]] == 1 && ans[y[i]] == 2 && ans[z[i]] == 1) {
      ans[y[i]] = 0;
    }
    if (ans[x[i]] == 1 && ans[y[i]] == 1 && ans[z[i]] == 2) {
      ans[z[i]] = 0;
    }
  }
  for (int num : ans) {
    cout << num << endl;
  }
  return 0;
}

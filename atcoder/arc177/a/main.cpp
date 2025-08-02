// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int n;
  cin >> n;
  bool flag = true;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    int t;
    t = x / 500;
    x -= min(t, f) * 500;
    f -= min(t, f);
    t = x / 100;
    x -= min(t, e) * 100;
    e -= min(t, e);
    t = x / 50;
    x -= min(t, d) * 50;
    d -= min(t, d);
    t = x / 10;
    x -= min(t, c) * 10;
    c -= min(t, c);
    t = x / 5;
    x -= min(t, b) * 5;
    b -= min(t, b);
    t = x / 1;
    x -= min(t, a) * 1;
    a -= min(t, a);
    if (x != 0) {
      flag = false;
    }
  }
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

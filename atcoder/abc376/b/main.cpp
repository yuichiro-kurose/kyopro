// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int f(int n, int s, int t, int x) {
  if (s > t) {
    swap(s, t);
  }
  if (s < x && x < t) {
    return s + n - t;
  }
  return t - s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  int l = 1, r = 2;
  int ans = 0;
  while (q--) {
    char h;
    int t;
    cin >> h >> t;
    if (h == 'L') {
      ans += f(n, l, t, r);
      l = t;
    } else {
      ans += f(n, r, t, l);
      r = t;
    }
  }
  cout << ans << endl;
  return 0;
}

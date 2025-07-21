// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  long long z;
  cin >> a >> b >> z;
  int c = __builtin_popcountll(z);
  if ((a + b - c) % 2 != 0) {
    cout << -1 << endl;
    return 0;
  }
  int d = (a + b - c) / 2;
  int p = a - d, q = b - d;
  if (d < 0 || p < 0 || q < 0) {
    cout << -1 << endl;
    return 0;
  }
  bitset<60> bst(z);
  string s = "", t = "";
  for (int i = 0; i < 60; i++) {
    if (bst[i]) {
      if (p-- > 0) {
        s += '1';
        t += '0';
      } else if (q-- > 0) {
        s += '0';
        t += '1';
      }
    } else {
      if (d-- > 0) {
        s += '1';
        t += '1';
      } else {
        s += '0';
        t += '0';
      }
    }
  }
  if (p > 0 || q > 0 || d > 0) {
    cout << -1 << endl;
    return 0;
  }
  vector<long long> p2(60);
  p2[0] = 1;
  for (int i = 1; i < 60; i++) {
    p2[i] = p2[i - 1] * 2;
  }
  long long x = 0, y = 0;
  for (int i = 0; i < 60; i++) {
    if (s[i] == '1') {
      x += p2[i];
    }
    if (t[i] == '1') {;
      y += p2[i];
    }
  }
  cout << x << ' ' << y << endl;
  return 0;
}

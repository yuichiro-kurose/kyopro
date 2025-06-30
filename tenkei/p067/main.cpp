// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

long long Pow(long long a, long long b) {
  long long ret = 1;
  while (b > 0) {
    if (b & 1) {
      ret = ret * a;
    }
    a = a * a;
    b >>= 1;
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string n;
  int k;
  cin >> n >> k;
  while (k--) {
    long long x = 0;
    for (int i = 0; i < n.size(); i++) {
      x += (long long) ((n[i] - '0') * Pow(8, n.size() - i - 1));
    }
    if (x == 0) {
      n = "0";
      continue;
    }
    string t = "";
    while (x > 0) {
      t += (x % 9) + '0';
      x /= 9;
    }
    reverse(t.begin(), t.end());
    for (char& c : t) {
      if (c == '8') {
        c = '5';
      }
    }
    n = t;
  }
  cout << n << endl;
  return 0;
}

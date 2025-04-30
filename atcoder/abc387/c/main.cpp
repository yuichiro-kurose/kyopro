// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

long long Pow(int a, int b) {
  long long ret = 1;
  for (int i = 0; i < b; i++) {
    ret *= a;
  }
  return ret;
}

long long f(long long x) {
  vector<int> a;
  for (char c : to_string(x)) {
    a.push_back(c - '0');
  }
  bool f = false;
  for (int i = 1; i < a.size(); i++) {
    if (f || a[i] >= a[0]) {
      a[i] = a[0] - 1;
      f = true;
    }
  }
  long long ret = 0;
  for (int i = 1; i < a.size(); i++) {
    for (int j = 1; j <= 9; j++) {
      ret += Pow(j, i - 1);
    }
  }
  for (int i = 1; i < a[0]; i++) {
    ret += Pow(i, a.size() - 1);
  }
  for (int i = 1; i < a.size(); i++) {
    for (int j = 0; j < a[i]; j++) {
      ret += Pow(a[0], a.size() - i - 1);
    }
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long l, r;
  cin >> l >> r;
  cout << f(r) - f(l - 1) << endl;
  return 0;
}

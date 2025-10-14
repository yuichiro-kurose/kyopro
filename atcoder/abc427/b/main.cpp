// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int f(int x) {
  int res = 0;
  while (x > 0) {
    res += x % 10;
    x /= 10;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n + 1);
  a[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      a[i] += f(a[j]);
    }
  }
  cout << a[n] << endl;
  return 0;
}

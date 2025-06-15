// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  long long x = 0;
  for (int i = 0; i <= m; i++) {
    long long p = 1;
    for (int j = 0; j < i; j++) {
      p *= n;
    }
    x += p;
    if (x > 1e9) {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << x << endl;
  return 0;
}

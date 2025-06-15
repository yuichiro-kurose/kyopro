// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> q[i];
  }
  int a, b;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    v[i] = i + 1;
  }
  int t = 1;
  do {
    if (p == v) {
      a = t;
    }
    if (q == v) {
      b = t;
    }
    t++;
  } while (next_permutation(v.begin(), v.end()));
  cout << abs(a - b) << endl;
  return 0;
}

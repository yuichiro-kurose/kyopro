// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> c(9);
  for (int i = 0; i < 9; i++) {
    cin >> c[i];
  }
  vector<tuple<int, int, int>> idx = {
      make_tuple(0, 1, 2), make_tuple(3, 4, 5), make_tuple(6, 7, 8),
      make_tuple(0, 3, 6), make_tuple(1, 4, 7), make_tuple(2, 5, 8),
      make_tuple(0, 4, 8), make_tuple(2, 4, 6)};
  vector<int> p(9);
  for (int i = 0; i < 9; i++) {
    p[i] = i;
  }
  int a = 0, b = 0;
  do {
    bool f = true;
    for (int i = 0; i < 8; i++) {
      int x = get<0>(idx[i]), y = get<1>(idx[i]), z = get<2>(idx[i]);
      int mx = max({p[x], p[y], p[z]});
      if (c[x] == c[y] && p[z] == mx ||
          c[y] == c[z] && p[x] == mx ||
          c[z] == c[x] && p[y] == mx) {
        f = false;
      }
    }
    if (f) {
      a++;
    }
    b++;
  } while (next_permutation(p.begin(), p.end()));
  cout << fixed << setprecision(9) << (double) a / b << endl;
  return 0;
}

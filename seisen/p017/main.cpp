// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k;
  cin >> k;
  vector<int> r(k), c(k);
  for (int i = 0; i < k; i++) {
    cin >> r[i] >> c[i];
  }
  vector<int> p(8);
  for (int i = 0; i < 8; i++) {
    p[i] = i;
  }
  do {
    bool f = true;
    for (int i = 0; i < k; i++) {
      if (p[r[i]] != c[i]) {
        f = false;
      }
    }
    for (int i = 0; i < 8; i++) {
      {
        int x = i, y = p[i];
        while (true) {
          x++; y++;
          if (x >= 8 || y >= 8) {
            break;
          }
          if (p[x] == y) {
            f = false;
          }
        }
      }
      {
        int x = i, y = p[i];
        while (true) {
          x++; y--;
          if (x >= 8 || y < 0) {
            break;
          }
          if (p[x] == y) {
            f = false;
          }
        }
      }
    }
    if (f) {
      break;
    }
  } while (next_permutation(p.begin(), p.end()));
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (p[i] == j) {
        cout << 'Q';
      } else {
        cout << '.';
      }
    }
    cout << endl;
  }
  return 0;
}

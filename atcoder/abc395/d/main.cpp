// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> pos(n), s(n), t(n);
  for (int i = 0; i < n; i++) {
    pos[i] = i;
    s[i] = i;
    t[i] = i;
  }
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      pos[a] = s[b];
    }
    if (type == 2) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      swap(t[s[a]], t[s[b]]);
      swap(s[a], s[b]);
    }
    if (type == 3) {
      int a;
      cin >> a;
      a--;
      cout << t[pos[a]] + 1 << endl;
    }
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, n;
  cin >> h >> w >> n;
  vector<set<int>> row(h), col(w);
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    row[x].insert(y);
    col[y].insert(x);
  }
  int q;
  cin >> q;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      x--;
      cout << row[x].size() << endl;
      for (int y : row[x]) {
        col[y].erase(x);
      }
      row[x] = set<int>();
    }
    if (type == 2) {
      int y;
      cin >> y;
      y--;
      cout << col[y].size() << endl;
      for (int x : col[y]) {
        row[x].erase(y);
      }
      col[y] = set<int>();
    }
  }
  return 0;
}

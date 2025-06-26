// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, q;
  cin >> h >> w >> q;
  vector<set<int>> row(h), col(w);
  for (int i = 0; i < h; i++) {
    for (int j = -1; j <= w; j++) {
      row[i].insert(j);
    }
  }
  for (int j = 0; j < w; j++) {
    for (int i = -1; i <= h; i++) {
      col[j].insert(i);
    }
  }
  int ans = h * w;
  for (int i = 0; i < q; i++) {
    int r, c;
    cin >> r >> c;
    r--;
    c--;
    if (row[r].count(c) && col[c].count(r)) {
      row[r].erase(c);
      col[c].erase(r);
      ans--;
      continue;
    }
    // left
    {
      auto itr = row[r].lower_bound(c);
      itr--;
      if (*itr != -1) {
        col[*itr].erase(r);
        row[r].erase(itr);
        ans--;
      }
    }
    // right
    {
      auto itr = row[r].lower_bound(c);
      if (*itr != w) {
        col[*itr].erase(r);
        row[r].erase(itr);
        ans--;
      }
    }
    // up
    {
      auto itr = col[c].lower_bound(r);
      itr--;
      if (*itr != -1) {
        row[*itr].erase(c);
        col[c].erase(itr);
        ans--;
      }
    }
    // down
    {
      auto itr = col[c].lower_bound(r);
      if (*itr != h) {
        row[*itr].erase(c);
        col[c].erase(itr);
        ans--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

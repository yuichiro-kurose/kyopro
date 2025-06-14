// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, sx, sy;
  cin >> n >> m >> sx >> sy;
  map<int, set<long long>> row, col;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    row[y].insert(x);
    col[x].insert(y);
  }
  for (auto& p : row) {
    p.second.insert(inf);
    p.second.insert(-inf);
  }
  for (auto& p : col) {
    p.second.insert(inf);
    p.second.insert(-inf);
  } 
  long long x = sx, y = sy;
  int ans = 0;
  for (int i = 0; i < m; i++) {
    char d;
    int c;
    cin >> d >> c;
    long long nx = x, ny = y;
    if (d == 'U') {
      ny += c;
      if (col.count(x)) {
        auto itr = col[x].lower_bound(y);
        while (*itr <= ny) {
          col[x].erase(itr);
          if (row[*itr].count(x)) {
            row[*itr].erase(x);
          }
          itr = col[x].lower_bound(y);
          ans++;
        }
      }
    }
    if (d == 'D') {
      ny -= c;
      if (col.count(x)) {
        auto itr = col[x].upper_bound(y);
        itr--;
        while (*itr >= ny) {
          col[x].erase(itr);
          if (row[*itr].count(x)) {
            row[*itr].erase(x);
          }
          itr = col[x].upper_bound(y);
          itr--;
          ans++;
        }
      }
    }
    if (d == 'L') {
      nx -= c;
      if (row.count(y)) {
        auto itr = row[y].upper_bound(x);
        itr--;
        while (*itr >= nx) {
          row[y].erase(itr);
          if (col[*itr].count(y)) {
            col[*itr].erase(y);
          }
          itr = row[y].upper_bound(x);
          itr--;
          ans++;
        }
      }
    }
    if (d == 'R') {
      nx += c;
      if (row.count(y)) {
        auto itr = row[y].lower_bound(x);
        while (*itr <= nx) {
          row[y].erase(itr);
          if (col[*itr].count(y)) {
            col[*itr].erase(y);
          }
          itr = row[y].lower_bound(x);
          ans++;
        }
      }
    }
    x = nx;
    y = ny;
  }
  cout << x << ' ' << y << ' ' << ans << endl;
  return 0;
}

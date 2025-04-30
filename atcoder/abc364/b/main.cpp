// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  int si, sj;
  cin >> si >> sj;
  si--;
  sj--;
  vector<vector<char>> c(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
    }
  }
  string x;
  cin >> x;
  for (char d : x) {
    int ni = si, nj = sj;
    if (d == 'L') {
      nj--;
    }
    if (d == 'R') {
      nj++;
    }
    if (d == 'U') {
      ni--;
    }
    if (d == 'D') {
      ni++;
    }
    if (ni < 0 || ni >= h || nj < 0 || nj >= w) {
      continue;
    }
    if (c[ni][nj] == '#') {
      continue;
    }
    si = ni;
    sj = nj;
  }
  cout << si + 1 << ' ' << sj + 1 << endl;
  return 0;
}

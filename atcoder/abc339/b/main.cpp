// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {-1, 0, 1, 0};
const vector<int> dy = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<bool>> g(h, vector<bool>(w, false));
  int d = 0;
  int x = 0, y = 0;
  while (n--) {
    if (!g[x][y]) {
      d = (d + 1) % 4;
      g[x][y] = true;
    } else {
      d = (d - 1 + 4) % 4;
      g[x][y] = false;
    }
    int nx = (x + dx[d] + h) % h;
    int ny = (y + dy[d] + w) % w;
    x = nx, y = ny;
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (g[i][j]) {
        cout << '#';
      } else {
        cout << '.';
      }
    }
    cout << endl;
  }
  return 0;
}

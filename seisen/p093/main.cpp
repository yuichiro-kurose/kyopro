// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

void update(vector<vector<int>>& board, int h, int w) {
  while (true) {
    bool f = true;
    for (int i = 0; i < h - 1; i++) {
      for (int j = 0; j < w; j++) {
        if (board[i][j] != 0 && board[i + 1][j] == 0) {
          f = false;
          swap(board[i][j], board[i + 1][j]);
        }
      }
    }
    if (f) {
      break;
    }
  }
}

long long solve(int x, int y, vector<vector<int>> board, int h, int w, int k, vector<long long> p) {
  long long score = 0;
  board[x][y] = 0;
  update(board, h, w);
  int cnt = 0;
  while (true) {
    bool updated = false;
    for (int i = 0; i < h; i++) {
      int l = 0, r = 0;
      while (l < w && r < w) {
        if (board[i][l] == 0) {
          l++;
          r++;
          continue;
        }
        while (r + 1 < w && board[i][r + 1] == board[i][l]) {
          r++;
        }
        if (r - l + 1 >= k) {
          updated = true;
          score += p[cnt] * board[i][l] * (r - l + 1);
          for (int j = l; j <= r; j++) {
            board[i][j] = 0;
          }
        }
        l = r + 1;
        r = l;
      }
    }
    if (!updated) {
      break;
    }
    update(board, h, w);
    cnt++;
  }
  return score;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<int>> c(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char tmp;
      cin >> tmp;
      c[i][j] = (char) (tmp - '0');
    }
  }
  vector<long long> p(32);
  p[0] = 1;
  for (int i = 1; i < 32; i++) {
    p[i] = p[i - 1] * 2;
  }
  long long ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      ans = max(ans, solve(i, j, c, h, w, k, p));
    }
  }
  cout << ans << endl;
  return 0;
}

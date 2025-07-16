// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int h;
    cin >> h;
    if (h == 0) {
      break;
    }
    vector<vector<int>> board(h, vector<int>(5));
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < 5; j++) {
        cin >> board[i][j];
      }
    }
    int score = 0;
    while (true) {
      bool f = false;
      for (int i = 0; i < h; i++) {
        int len = 0, num;
        int l = 0, r = 0;
        int left = 0, right = 0;
        while (l < 5 && r < 5) {
          if (board[i][l] == 0) {
            l++;
            r++;
            continue;
          }
          while (r + 1 < 5 && board[i][r + 1] == board[i][l]) {
            r++;
          }
          if (len < r - l + 1) {
            len = r - l + 1;
            num = board[i][l];
            left = l;
            right = r;
          }
          l = r + 1, r = l;
        }
        if (len >= 3) {
          f = true;
          score += len * num;
          for (int j = left; j <= right; j++) {
            board[i][j] = 0;
          }
        }
      }
      if (!f) {
        break;
      }
      while (true) {
        bool update = false;
        for (int i = 0; i < h - 1; i++) {
          for (int j = 0; j < 5; j++) {
            if (board[i][j] != 0 && board[i + 1][j] == 0) {
              update = true;
              swap(board[i][j], board[i + 1][j]);
            }
          }
        }
        if (!update) {
          break;
        }
      }
    } 
    cout << score << endl;
  }
  return 0;
}

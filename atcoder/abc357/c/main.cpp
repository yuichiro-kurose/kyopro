// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<char>> s(1, vector<char>(1, '#'));
  int size = 1;
  while (n--) {
    int new_size = size * 3;
    vector<vector<char>> t(new_size, vector<char>(new_size, '.'));
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (i == 1 && j == 1) {
          continue;
        }
        for (int x = 0; x < size; x++) {
          for (int y = 0; y < size; y++) {
            int nx = x + i * size, ny = y + j * size;
            t[nx][ny] = s[x][y];
          }
        }
      }
    }
    s = t;
    size = new_size;
  }
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << s[i][j];
    }
    cout << endl;
  }
  return 0;
}

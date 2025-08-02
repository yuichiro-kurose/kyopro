// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> rotate(vector<vector<char>> x) {
  vector<vector<char>> y = vector<vector<char>>(4, vector<char>(4));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      y[j][4 - i - 1] = x[i][j];
    }
  }
  return y;
}

bool solve(vector<vector<vector<char>>> p, int a, int b, int c) {
  for (int k = 0; k < a; k++) {
    p[0] = rotate(p[0]);
  }
  for (int k = 0; k < b; k++) {
    p[1] = rotate(p[1]);
  }
  for (int k = 0; k < c; k++) {
    p[2] = rotate(p[2]);
  }
  for (int i = 0; i < 3; i++) {
    while (true) {
      bool f = true;
      for (int k = 0; k < 4; k++) {
        if (p[i][0][k] == '#') {
          f = false;
        }
      }
      if (!f) {
        break;
      }
      for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 4; k++) {
          swap(p[i][j][k], p[i][j + 1][k]);
        }
      }
    }
    while (true) {
      bool f = true;
      for (int j = 0; j < 4; j++) {
        if (p[i][j][0] == '#') {
          f = false;
        }
      }
      if (!f) {
        break;
      }
      for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 3; k++) {
          swap(p[i][j][k], p[i][j][k + 1]);
        }
      }
    }
  }
  vector<int> x(3), y(3);
  for (x[0] = 0; x[0] < 4; x[0]++) {
    for (y[0] = 0; y[0] < 4; y[0]++) {
      for (x[1] = 0; x[1] < 4; x[1]++) {
        for (y[1] = 0; y[1] < 4; y[1]++) {
          for (x[2] = 0; x[2] < 4; x[2]++) {
            for (y[2] = 0; y[2] < 4; y[2]++) {
              bool f = true;
              for (int i = 0; i < 3; i++) {
                int mx_x = 0, mx_y = 0;
                for (int j = 0; j < 4; j++) {
                  for (int k = 0; k < 4; k++) {
                    if (p[i][j][k] == '#') {
                      mx_x = max(mx_x, k);
                      mx_y = max(mx_y, j);
                    }
                  }
                }
                if (mx_x + x[i] >= 4 || mx_y + y[i] >= 4) {
                  f = false;
                }
              }
              if (!f) {
                continue;
              }
              vector<vector<vector<char>>> q(4, vector<vector<char>>(4, vector<char>(4, '.')));
              for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 4; j++) {
                  for (int k = 0; k < 4; k++) {
                    if (p[i][j][k] == '#') {
                      q[i][j + y[i]][k + x[i]] = '#';
                    }
                  }
                }
              }
              bool ok = true;
              for (int j = 0; j < 4; j++) {
                for (int k = 0; k < 4; k++) {
                  int cnt = 0;
                  for (int i = 0; i < 3; i++) {
                    if (q[i][j][k] == '#') {
                      cnt++;
                    }
                  }
                  if (cnt != 1) {
                    ok = false;
                  }
                }
              }
              if (ok) {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<vector<vector<char>>> p(3, vector<vector<char>>(4, vector<char>(4)));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 4; k++) {
        cin >> p[i][j][k];
      }
    }
  }
  for (int a = 0; a < 4; a++) {
    for (int b = 0; b < 4; b++) {
      for (int c = 0; c < 4; c++) {
        if (solve(p, a, b, c)) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}

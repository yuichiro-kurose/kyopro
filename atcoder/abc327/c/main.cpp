// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<vector<int>> a(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> a[i][j];
      a[i][j]--;
    }
  }
  vector<bool> f(9, false);
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      f[a[i][j]] = true;
    }
    for (int j = 0; j < 9; j++) {
      if (!f[j]) {
        cout << "No" << endl;
        return 0;
      }
    }
    for (int j = 0; j < 9; j++) {
      f[j] = false;
    }
  }
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      f[a[j][i]] = true;
    }
    for (int j = 0; j < 9; j++) {
      if (!f[j]) {
        cout << "No" << endl;
        return 0;
      }
    }
    for (int j = 0; j < 9; j++) {
      f[j] = false;
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {
          f[a[i * 3 + k][j * 3 + l]] = true;
        }
      }
      for (int k = 0; k < 9; k++) {
        if (!f[k]) {
          cout << "No" << endl;
          return 0;
        }
      }
      for (int k = 0; k < 9; k++) {
        f[k] = false;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}

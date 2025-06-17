// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }
  vector<vector<int>> cnt_o(h, vector<int>(w + 1, 0)), cnt_i(w, vector<int>(h + 1, 0));
  for (int i = 0; i < h; i++) {
    for (int j = w - 1; j >= 0; j--) {
      if (s[i][j] == 'O') {
        cnt_o[i][j]++;
      }
      cnt_o[i][j] += cnt_o[i][j + 1];
    }
  }
  for (int i = 0; i < w; i++) {
    for (int j = h - 1; j >= 0; j--) {
      if (s[j][i] == 'I') {
        cnt_i[i][j]++;
      }
      cnt_i[i][j] += cnt_i[i][j + 1];
    }
  }
  long long ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == 'J') {
        ans += cnt_o[i][j] * cnt_i[j][i];
      }
    }
  }
  cout << ans << endl;
  return 0;
}

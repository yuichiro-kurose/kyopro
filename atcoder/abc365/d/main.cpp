// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int dp_r = 0, dp_p = 0, dp_s = 0;
  for (char c : s) {
    int tmp_r = dp_r, tmp_p = dp_p, tmp_s = dp_s;
    if (c == 'R') {
      dp_r = max(tmp_p, tmp_s);
      dp_p = max(tmp_r + 1, tmp_s + 1);
      dp_s = -inf;
    }
    if (c == 'P') {
      dp_r = -inf;
      dp_p = max(tmp_r, tmp_s);
      dp_s = max(tmp_r + 1, tmp_p + 1);
    }
    if (c == 'S') {
      dp_r = max(tmp_p + 1, tmp_s + 1);
      dp_p = -inf;
      dp_s = max(tmp_r, tmp_p);
    }
  }
  cout << max({dp_r, dp_p, dp_s}) << endl;
  return 0;
}

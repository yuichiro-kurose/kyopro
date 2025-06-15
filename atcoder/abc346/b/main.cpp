// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int w, b;
  cin >> w >> b;
  string s = "wbwbwwbwbwbw";
  for (int i = 0; i < s.size(); i++) {
    int cnt_w = 0, cnt_b = 0;
    for (int j = 0; j < w + b; j++) {
      if (s[(i + j) % s.size()] == 'w') {
        cnt_w++;
      } else {
        cnt_b++;
      }
    }
    if (cnt_w == w && cnt_b == b) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

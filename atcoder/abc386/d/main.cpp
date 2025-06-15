// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> brack, white;
  for (int i = 0; i < m; i++) {
    int x, y;
    char c;
    cin >> x >> y >> c;
    if (c == 'B') {
      brack.push_back(make_pair(x, -y));
    } else {
      white.push_back(make_pair(x, y));
    }
  }
  sort(brack.begin(), brack.end());
  sort(white.begin(), white.end());
  int pb = 0, pw = 0;
  bool f = true;
  while (pb < brack.size() && pw < white.size()) {
    while (pb < brack.size() && brack[pb].first < white[pw].first) {
      pb++;
    }
    if (pb == brack.size()) {
      break;
    }
    if (-brack[pb].second >= white[pw].second) {
      f = false;
    }
    pw++;
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

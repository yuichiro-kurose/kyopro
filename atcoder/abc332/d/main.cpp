// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> b[i][j];
    }
  }
  vector<int> p1(h);
  for (int i = 0; i < h; i++) {
    p1[i] = i;
  }
  int ans = inf;
  do {
    int cost1 = 0;
    for (int i = 0; i < h - 1; i++) {
      for (int j = i + 1; j < h; j++) {
        if (p1[i] > p1[j]) {
          cost1++;
        }
      }
    }
    vector<int> p2(w);
    for (int i = 0; i < w; i++) {
      p2[i] = i;
    }
    do {
      int cost2 = 0;
      for (int i = 0; i < w - 1; i++) {
        for (int j = i + 1; j < w; j++) {
          if (p2[i] > p2[j]) {
            cost2++;
          }
        }
      }
      bool f = true;
      for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
          if (a[p1[i]][p2[j]] != b[i][j]) {
            f = false;
          }
        }
      }
      if (f) {
        ans = min(ans, cost1 + cost2);
      }
    } while (next_permutation(p2.begin(), p2.end()));
  } while (next_permutation(p1.begin(), p1.end()));
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}

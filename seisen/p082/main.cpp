// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int day_sec = 60 * 60 * 24;

int f() {
  int h, m, s;
  char c;
  cin >> h >> c >> m >> c >> s;
  return h * 60 * 60 + m * 60 + s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> cnt(day_sec, 0);
    for (int i = 0; i < n; i++) {
      int t1 = f(), t2 = f();
      cnt[t1]++;
      cnt[t2]--;
    }
    int ans = 0;
    for (int i = 0; i < day_sec; i++) {
      if (i > 0) {
        cnt[i] += cnt[i - 1];
      }
      ans = max(ans, cnt[i]);
    }
    cout << ans << endl;
  }
  return 0;
}

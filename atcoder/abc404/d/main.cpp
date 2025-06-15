// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  vector<vector<int>> zoo(n);
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    while (k--) {
      int a;
      cin >> a;
      zoo[a - 1].push_back(i);
    }
  }
  int r = 1;
  for (int i = 0; i < n; i++) {
    r *= 3;
  }
  long long ans = inf;
  for (int i = 0; i < r; i++) {
    long long now = 0;
    vector<int> num(n);
    int x = i;
    for (int j = 0; j < n; j++) {
      num[j] = x % 3;
      x /= 3;
    }
    vector<int> cnt(m);
    for (int j = 0; j < n; j++) {
      now += c[j] * num[j];
      for (int t : zoo[j]) {
        cnt[t] += num[j];
      }
    }
    bool f = true;
    for (int j = 0; j < m; j++) {
      if (cnt[j] < 2) {
        f = false;
      }
    }
    if (f) {
      ans = min(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}

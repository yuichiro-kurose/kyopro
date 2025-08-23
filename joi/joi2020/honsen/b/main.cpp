// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> idx_j, idx_o, idx_i;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'J') {
      idx_j.push_back(i);
    }
    if (s[i] == 'O') {
      idx_o.push_back(i);
    }
    if (s[i] == 'I') {
      idx_i.push_back(i);
    }
  }
  int ans = inf;
  for (int i = 0; i + k - 1 < idx_j.size(); i++) {
    int x = lower_bound(idx_o.begin(), idx_o.end(), idx_j[i + k - 1]) - idx_o.begin();
    if (x + k - 1 >= idx_o.size()) {
      continue;
    }
    int y = lower_bound(idx_i.begin(), idx_i.end(), idx_o[x + k - 1]) - idx_i.begin();
    if (y + k - 1 >= idx_i.size()) {
      continue;
    }
    int len = idx_i[y + k - 1] - idx_j[i] + 1;
    int now = len - k * 3;
    ans = min(ans, now);
  }
  if (ans == inf) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}

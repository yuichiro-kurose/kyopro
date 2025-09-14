// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> p(n + 2);
  p[0] = make_pair(0, 0);
  for (int i = 1; i <= n; i++) {
    int a, s;
    cin >> a >> s;
    p[i] = make_pair(a, s);
  }
  p[n + 1] = make_pair(inf, 2);
  sort(p.begin(), p.end());
  int m;
  cin >> m;
  while (m--) {
    int b;
    cin >> b;
    int idx = 0;
    for (int i = 1; i <= n; i++) {
      if (p[i].first <= b) {
        idx = i;
      }
    }
    if (p[idx].second == p[idx + 1].second || p[idx].first == b) {
      cout << p[idx].second << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}

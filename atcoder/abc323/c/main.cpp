// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  vector<int> score(n);
  vector<string> s(n);
  int mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    score[i] = i + 1;
    for (int j = 0; j < m; j++) {
      if (s[i][j] == 'o') {
        score[i] += a[j].first;
      }
    }
    mx = max(mx, score[i]);
  }
  sort(a.rbegin(), a.rend());
  for (int i = 0; i < n; i++) {
    int ans = 0, p = 0;
    while (score[i] < mx) {
      if (s[i][a[p].second] == 'x') {
        score[i] += a[p].first;
        ans++;
      }
      p++;
    }
    cout << ans << endl;
  }
  return 0;
}

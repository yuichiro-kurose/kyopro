// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> k(m);
  vector<vector<int>> a(m);
  vector<set<int>> st(n);
  for (int i = 0; i < m; i++) {
    cin >> k[i];
    a[i].resize(k[i]);
    for (int j = 0; j < k[i]; j++) {
      cin >> a[i][j];
      a[i][j]--;
      st[a[i][j]].insert(i);
    }
    // sort(a[i].begin(), a[i].end());
  }
  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    b[i]--;
  }
  reverse(b.begin(), b.end());
  vector<int> ans(n);
  int now = m;
  for (int i = 0; i < n; i++) {
    ans[i] = now;
    now -= st[b[i]].size();
    for (int p : st[b[i]]) {
      for (int q : a[p]) {
        if (q == b[i]) {
          continue;
        }
        if (st[q].count(p)) {
          st[q].erase(p);
        }
      }
    }
  }
  reverse(ans.begin(), ans.end());
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  cout << endl;
  return 0;
}

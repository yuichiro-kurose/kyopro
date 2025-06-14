// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> x(n);
  for (int i = 0; i < n; i++) {
    int c, a;
    cin >> c >> a;
    x[i] = make_pair(c, a);
  }
  sort(x.begin(), x.end());
  int cnt1 = 0;
  for (int i = 0; i < m; i++) {
    cnt1 += x[i].second;
  }
  int cnt2 = 0;
  for (int i = m; i < n; i++) {
    cnt2 += x[i].first - x[i].second;
  }
  if (cnt1 <= cnt2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

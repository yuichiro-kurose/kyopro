// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i].first >> p[i].second;
    p[i].second *= -1;
  }
  sort(p.begin(), p.end());
  vector<int> dp;
  for (int i = 0; i < n; i++) {
    p[i].second *= -1;
    if (dp.empty() || dp.back() < p[i].second) {
      dp.push_back(p[i].second);
    } else {
      *lower_bound(dp.begin(), dp.end(), p[i].second) = p[i].second;
    }
  }
  cout << dp.size() << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<pair<int, int>> lr;
  int p = 0;
  if (a[0] == 0) {
    p = 1;
  }
  lr.push_back(make_pair(a[p], a[p]));
  for (int i = p; i < k - 1; i++) {
    if (a[i] + 1 == a[i + 1]) {
      lr.back().second = a[i + 1];
    } else {
      lr.push_back(make_pair(a[i + 1], a[i + 1]));
    }
  }
  int ans = lr[0].second - lr[0].first + 1 + p;
  for (int i = 1; i < lr.size(); i++) {
    ans = max(ans, lr[i].second - lr[i].first + 1 + p);
    if (p == 1 && lr[i - 1].second + 2 == lr[i].first) {
      ans = max(ans, lr[i].second - lr[i - 1].first + 1);
    }
  }
  cout << ans << endl;
  return 0;
}

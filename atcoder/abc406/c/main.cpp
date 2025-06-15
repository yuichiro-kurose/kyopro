// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  int l = n - 1;
  for (int i = 0; i < n - 1; i++) {
    if (p[i] < p[i + 1]) {
      l = i;
      break;
    }
  }
  int r = 0;
  for (int i = n - 1; i >= 1; i--) {
    if (p[i] > p[i - 1]) {
      r = i;
      break;
    }
  }
  vector<int> x;
  for (int i = l; i <= r; i++) {
    x.push_back(p[i]);
  }
  vector<pair<int, int>> a;
  a.push_back(make_pair(0, 0));
  for (int i = 1; i < (int) x.size() - 1; i++) {
    if (x[i - 1] < x[i] && x[i] > x[i + 1]) {
      a.push_back(make_pair(i, 0));
    }
    if (x[i - 1] > x[i] && x[i] < x[i + 1]) {
      a.back().second = i;
    }
  }
  a.push_back(make_pair(x.size() - 1, x.size() - 1));
  long long ans = 0;
  for (int i = 1; i < a.size() - 1; i++) {
    ans += (long long) (a[i].first - a[i - 1].second) * (a[i + 1].first - a[i].second);
  }
  cout << ans << endl;
  return 0;
}

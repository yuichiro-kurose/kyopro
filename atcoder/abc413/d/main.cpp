// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

bool f(vector<pair<long long, bool>> x, bool flag) {
  if (flag) {
    sort(x.begin(), x.end());
  } else {
    sort(x.rbegin(), x.rend());
  }
  bool f1 = true, f2 = true, f3 = true;
  for (int i = 0; i < x.size() - 1; i++) {
    if (x[i].first != x[i + 1].first) {
      f1 = false;
    }
    if (x[i].second == x[i + 1].second) {
      f2 = false;
    } else {
      f3 = false;
    }
  }
  int cnt = 0;
  for (auto p : x) {
    if (p.second) {
      cnt++;
    }
  }
  if (f1 && abs((int) x.size() - cnt * 2) <= 1) {
    return true;
  }
  if (!f2 && !f3) {
    return false;
  }
  for (int i = 1; i < x.size() - 1; i++) {
    if (x[i].first * x[i].first != x[i - 1].first * x[i + 1].first) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<long long, bool>> ps(n);
    for (int i = 0; i < n; i++) {
      long long a;
      cin >> a;
      ps[i] = make_pair(abs(a), a < 0);
    }
    if (f(ps, false) || f(ps, true)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}

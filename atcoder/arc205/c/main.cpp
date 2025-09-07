// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> s(n), t(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
  }
  vector<pair<int, int>> st(n);
  for (int i = 0; i < n; i++) {
    st[i] = make_pair(s[i], t[i]);
  }
  sort(st.begin(), st.end());
  for (int i = 0; i < n - 1; i++) {
    if (st[i].second > st[i + 1].second) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  vector<pair<int, int>> a, b;
  for (int i = 0; i < n; i++) {
    if (s[i] < t[i]) {
      a.push_back(make_pair(s[i], i));
    } else {
      b.push_back(make_pair(s[i], i));
    }
  }
  sort(a.rbegin(), a.rend());
  sort(b.begin(), b.end());
  vector<int> p;
  for (auto x : a) {
    p.push_back(x.second + 1);
  }
  for (auto x : b) {
    p.push_back(x.second + 1);
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << p[i];
  }
  cout << endl;
  return 0;
}

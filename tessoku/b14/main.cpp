// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> p(1, 0), q(1, 0);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (i & 1) {
      p.push_back(a);
    } else {
      q.push_back(a);
    }
  }
  auto f = [&](vector<int> v) -> vector<int> {
    vector<int> ret;
    for (int i = 0; i < 1 << v.size(); i++) {
      int sum = 0;
      for (int j = 0; j < v.size(); j++) {
        if ((i >> j) & 1) {
          sum += v[j];
        }
      }
      ret.push_back(sum);
    }
    return ret;
  };
  vector<int> s = f(p), t = f(q);
  sort(t.begin(), t.end());
  for (int i = 0; i < s.size(); i++) {
    if (binary_search(t.begin(), t.end(), k - s[i])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

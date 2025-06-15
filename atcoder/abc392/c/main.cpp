// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> q[i];
  }
  map<int, int> a;
  for (int i = 0; i < n; i++) {
    a[q[i]] = i;
  }
  for (auto x : a) {
    cout << q[p[x.second] - 1] << ' ';
  }
  cout << endl;
  return 0;
}

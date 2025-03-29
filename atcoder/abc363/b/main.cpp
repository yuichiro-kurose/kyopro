// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t, p;
  cin >> n >> t >> p;
  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }
  sort(l.rbegin(), l.rend());
  cout << max(t - l[p - 1], 0) << endl;
  return 0;
}

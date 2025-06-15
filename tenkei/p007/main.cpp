// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  a.push_back(-inf);
  a.push_back(inf);
  sort(a.begin(), a.end());
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int b;
    cin >> b;
    int ind = lower_bound(a.begin(), a.end(), b) - a.begin();
    cout << min(abs(a[ind] - b), abs(b - a[ind - 1])) << endl;
  }
  return 0;
}

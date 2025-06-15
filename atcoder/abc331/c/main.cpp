// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int inf = INT_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> b = a;
  sort(b.begin(), b.end());
  b.push_back(inf);
  vector<long long> c(n + 1, 0);
  for (int i = n - 1; i >= 0; i--) {
    c[i] = b[i] + c[i + 1];
  }
  vector<long long> ans(n);
  for (int i = 0; i < n; i++) {
    int idx = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
    ans[i] = c[idx];
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}

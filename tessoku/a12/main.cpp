// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = 1e9 + 1;
  while (l < r) {
    int m = (l + r) / 2;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      sum += m / a[i];
    }
    if (sum < k) {
      l = m + 1;
    } else {
      r = m;
    }
  }
  cout << l << endl;
  return 0;
}

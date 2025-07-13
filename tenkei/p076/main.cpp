// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> a(n + n);
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[n + i] = a[i];
    sum += a[i];
  }
  int l = 0, r = 0;
  long long len = a[0];
  while (l < n + n && r < n + n) {
    while (r + 1 < n + n && (len + a[r + 1]) * 10 <= sum) {
      len += a[r + 1];
      r++;
    }
    if (len * 10 == sum) {
      cout << "Yes" << endl;
      return 0;
    }
    len -= a[l];
    l++;
  }
  cout << "No" << endl;
  return 0;
}

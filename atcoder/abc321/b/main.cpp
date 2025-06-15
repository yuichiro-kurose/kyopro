// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<int> a(n - 1);
  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a.begin(), a.end());
  if (sum - a[n - 2] >= x) {
    cout << 0 << endl;
  } else if (sum - a[0] < x) {
    cout << -1 << endl;
  } else {
    cout << x - (sum - a[0] - a[n - 2]) << endl;
  }
  return 0;
}

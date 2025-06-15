// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const long long inf = LLONG_MAX / 2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a, b;
  cin >> n >> a >> b;
  int day = a + b;
  vector<long long> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
    d[i] %= day;
  }
  sort(d.begin(), d.end());
  for (int i = 0; i < n; i++) {
    d.push_back(d[i] + day);
  }
  long long mn = inf;
  for (int i = 0; i < n; i++) {
    mn = min(mn, d[i + n - 1] - d[i] + 1);
  }
  if (mn <= a) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  long long s;
  cin >> n >> s;
  vector<long long> a(n * 2);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i + n] = a[i];
  }
  for (int i = 1; i < n * 2; i++) {
    a[i] += a[i - 1];
  }
  s %= a[n - 1];
  int r = 0;
  for (int l = 0; l < n * 2; l++) {
    while (r + 1 < n * 2 && a[r + 1] - a[l] <= s) {
      r++;
    }
    if (a[r] - a[l] == s) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

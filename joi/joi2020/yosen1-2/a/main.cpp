// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  sort(a.begin(), a.end());
  cout << a[1] + a[2] << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> w(10);
  rep(i, 10) cin >> w[i];
  vector<int> k(10);
  rep(i, 10) cin >> k[i];
  sort(w.rbegin(), w.rend());
  sort(k.rbegin(), k.rend());
  cout << w[0] + w[1] + w[2] << ' ' << k[0] + k[1] + k[2] << endl;
  return 0;
}

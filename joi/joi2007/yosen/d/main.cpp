// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  int m; cin >> m;
  vector<int> a(n * 2);
  rep(i, n * 2) a[i] = i + 1;
  rep(i, m) {
    int k; cin >> k;
    vector<int> na;
    if (k == 0) {
      rep(j, n) {
        na.push_back(a[j]);
        na.push_back(a[n + j]);
      }
    }
    else {
      for (int j = k; j < n * 2; j++) na.push_back(a[j]);
      rep(j, k) na.push_back(a[j]);
    }
    a = na;
  }
  rep(i, n * 2) cout << a[i] << endl;
  return 0;
}

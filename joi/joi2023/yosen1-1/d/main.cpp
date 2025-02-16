// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<int> cnt(n * 2, 0);
  rep(i, n * 2 - 1) {
    int a; cin >> a;
    cnt[a - 1]++;
  }
  rep(i, n * 2) if (cnt[i] == 1) cout << i + 1 << endl;
  return 0;
}

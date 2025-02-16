// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string n; cin >> n;
  if (n[0] == n[1]) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}

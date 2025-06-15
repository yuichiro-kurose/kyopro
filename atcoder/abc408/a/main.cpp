// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, s;
  cin >> n >> s;
  int now = 0;
  bool f = true;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    if (t - now > s) {
      f = false;
    }
    now = t;
  }
  if (f) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

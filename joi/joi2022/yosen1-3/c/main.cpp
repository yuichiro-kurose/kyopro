// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  string s; cin >> s;
  int cnt = 0;
  for (char c : s) {
    if (c == 'R') {
      cnt++;
    }
  }
  if (cnt == k) {
    cout << 'W' << endl;
  } else {
    cout << 'R' << endl;
  }
  return 0;
}

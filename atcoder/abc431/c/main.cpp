// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> h(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(h.begin(), h.end());
  sort(b.begin(), b.end());
  int pos = 0;
  int ok = 0;
  for (int i = 0; i < n; i++) {
    while (pos < m && h[i] > b[pos]) {
      pos++;
    }
    if (pos == m) {
      break;
    }
    pos++;
    ok = i + 1;
  }
  if (ok >= k) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

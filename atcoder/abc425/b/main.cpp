// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n), p(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    p[i] = i + 1;
  }
  do {
    bool f = true;
    for (int i = 0; i < n; i++) {
      if (a[i] != -1 && p[i] != a[i]) {
        f = false;
      }
    }
    if (f) {
      cout << "Yes" << endl;
      for (int i = 0; i < n; i++) {
        if (i > 0) {
          cout << ' ';
        }
        cout << p[i];
      }
      cout << endl;
      return 0;
    }
  } while (next_permutation(p.begin(), p.end()));
  cout << "No" << endl;
  return 0;
}

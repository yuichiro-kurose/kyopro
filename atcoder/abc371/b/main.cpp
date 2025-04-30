// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<bool> f(n, false);
  for (int i = 0; i < m; i++) {
    int a;
    char b;
    cin >> a >> b;
    a--;
    if (b == 'M') {
      if (f[a]) {
        cout << "No" << endl;
      } else {
        cout << "Yes" << endl;
        f[a] = true;
      }
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}

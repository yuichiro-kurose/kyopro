// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<bool> f(30, true);
  for (int i = 0; i < 28; i++) {
    int a;
    cin >> a;
    f[a - 1] = false;
  }
  for (int i = 0; i < 30; i++) {
    if (f[i]) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}

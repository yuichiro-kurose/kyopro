// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int s = 0;
  for (int i = 0; i < 4; i++) {
    int a;
    cin >> a;
    s += a;
  }
  int t = 0;
  for (int i = 0; i < 4; i++) {
    int b;
    cin >> b;
    t += b;
  }
  cout << max(s, t) << endl;
  return 0;
}

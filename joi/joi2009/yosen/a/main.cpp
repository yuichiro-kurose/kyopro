// author: Yuichiro Kurose

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  for (int i = 0; i < 3; i++) {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    int t = t2 - t1;
    cout << t / 3600 << ' ' << (t % 3600) / 60 << ' ' << t % 60 << endl;
  }
  return 0;
}

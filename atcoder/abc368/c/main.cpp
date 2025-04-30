// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  long long t = 0;
  while (n--) {
    int h;
    cin >> h;
    t += (h / 5) * 3;
    h %= 5;
    while (h > 0) {
      t++;
      if (t % 3 == 0) {
        h -= 3;
      } else {
        h--;
      }
    }
  }
  cout << t << endl;
  return 0;
}

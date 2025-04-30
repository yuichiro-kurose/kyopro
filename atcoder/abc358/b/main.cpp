// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, a;
  cin >> n >> a;
  int time = 0;
  while (n--) {
    int t;
    cin >> t;
    if (t >= time) {
      time = t + a;
    } else {
      time = time + a;
    }
    cout << time << endl;
  }
  return 0;
}

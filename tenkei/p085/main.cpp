// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long k;
  cin >> k;
  int cnt = 0;
  for (long long a = 1; a * a * a <= k; a++) {
    for (long long b = a; a * b * b <= k; b++) {
      if (k % (a * b) == 0) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}

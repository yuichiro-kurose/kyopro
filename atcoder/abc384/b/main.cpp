// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, r;
  cin >> n >> r;
  for (int i = 0; i < n; i++) {
    int d, a;
    cin >> d >> a;
    if (d == 1 && 1600 <= r && r <= 2799 || d == 2 && 1200 <= r && r <= 2399) {
      r += a;
    }
  }
  cout << r << endl;
  return 0;
}

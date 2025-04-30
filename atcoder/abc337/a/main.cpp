// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int a = 0, b = 0;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    a += x;
    b += y;
  }
  if (a > b) {
    cout << "Takahashi" << endl;
  }
  if (a == b) {
    cout << "Draw" << endl;
  }
  if (a < b) {
    cout << "Aoki" << endl;
  }
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    int a;
    cin >> a;
    sum += a;
  }
  int x = sum / 60;
  cout << x << endl;
  int y = sum % 60;
  cout << y << endl;
  return 0;
}

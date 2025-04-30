// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  char ab, ac, bc;
  cin >> ab >> ac >> bc;
  if (ab != ac) {
    cout << 'A' << endl;
  } else if (ab == bc) {
    cout << 'B' << endl;
  } else {
    cout << 'C' << endl;
  }
  return 0;
}

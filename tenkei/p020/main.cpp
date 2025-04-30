// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long a, b, c;
  cin >> a >> b >> c;
  long long p = 1;
  for (int i = 0; i < b; i++) {
    p *= c;
  }
  if (a < p) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

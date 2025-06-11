// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int x = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a <= x) {
      cout << "No" << endl;
      return 0;
    }
    x = a;
  }
  cout << "Yes" << endl;
  return 0;
}

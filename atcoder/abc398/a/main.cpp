// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  if (n & 1) {
    for (int i = 0; i < n / 2; i++) {
      cout << '-';
    }
    cout << '=';
    for (int i = 0; i < n / 2; i++) {
      cout << '-';
    }
  } else {
    for (int i = 0; i < n / 2 - 1; i++) {
      cout << '-';
    }
    cout << "==";
    for (int i = 0; i < n / 2 - 1; i++) {
      cout << '-';
    }
  }
  cout << endl;
  return 0;
}

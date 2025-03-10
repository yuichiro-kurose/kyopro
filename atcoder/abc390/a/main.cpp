// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> a(5);
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  vector<int> b = {1, 2, 3, 4, 5};
  for (int i = 0; i < 4; i++) {
    swap(a[i], a[i + 1]);
    if (a == b) {
      cout << "Yes" << endl;
      return 0;
    }
    swap(a[i], a[i + 1]);
  }
  cout << "No" << endl;
  return 0;
}

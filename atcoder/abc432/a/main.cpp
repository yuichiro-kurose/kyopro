// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> a(3);
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  for (int i = 0; i < 3; i++) {
    cout << a[i];
  }
  cout << endl;
  return 0;
}

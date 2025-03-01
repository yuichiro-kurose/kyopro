// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    bool f = false, g = false;
    if (binary_search(a.begin(), a.end(), a[i] + 3)) {
      f = true;
    }
    if (binary_search(a.begin(), a.end(), a[i] + 6)) {
      g = true;
    }
    if (f && g) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

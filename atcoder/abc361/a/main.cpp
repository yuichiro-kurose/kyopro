// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> b;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    b.push_back(a);
    if (i == k - 1) {
      b.push_back(x);
    }
  }
  for (int i = 0; i < n + 1; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << b[i];
  }
  cout << endl;
  return 0;
}

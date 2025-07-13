// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<char> c(n);
  vector<long long> l(n);
  bool f = false;
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> c[i] >> l[i];
    sum += l[i];
    if (sum > 100) {
      f = true;
    }
  }
  if (f) {
    cout << "Too Long" << endl;
  } else {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < l[i]; j++) {
        cout << c[i];
      }
    }
    cout << endl;
  }
  return 0;
}

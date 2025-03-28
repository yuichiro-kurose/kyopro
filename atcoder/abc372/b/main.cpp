// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int m;
  cin >> m;
  vector<int> x;
  while (m > 0) {
    x.push_back(m % 3);
    m /= 3;
  }
  vector<int> a;
  for (int i = 0; i < x.size(); i++) {
    for (int j = 0; j < x[i]; j++) {
      a.push_back(i);
    }
  }
  cout << a.size() << endl;
  for (int i = 0; i < a.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << a[i];
  }
  cout << endl;
  return 0;
}

// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> x(3);
  for (int i = 0; i < 3; i++) {
    cin >> x[i];
  }
  sort(x.begin(), x.end());
  cout << x[1] << endl;
  return 0;
}

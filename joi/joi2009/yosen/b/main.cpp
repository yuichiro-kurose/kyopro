// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> w(10);
  for (int i = 0; i < 10; i++) {
    cin >> w[i];
  }
  vector<int> k(10);
  for (int i = 0; i < 10; i++) {
    cin >> k[i];
  }
  sort(w.rbegin(), w.rend());
  sort(k.rbegin(), k.rend());
  cout << w[0] + w[1] + w[2] << ' ' << k[0] + k[1] + k[2] << endl;
  return 0;
}

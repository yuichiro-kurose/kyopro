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
  sort(a.begin(), a.end());
  do {
    if (a[0] * a[1] == a[2]) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(a.begin(), a.end()));
  cout << "No" << endl;
  return 0;
}

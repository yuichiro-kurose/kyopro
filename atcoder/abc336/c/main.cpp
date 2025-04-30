// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n;
  cin >> n;
  n--;
  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> a;
  while (n > 0) {
    a.push_back(n % 5);
    n /= 5;
  }
  a.push_back(n);
  for (int i = a.size() - 1; i--; i >= 0) {
    cout << a[i] * 2;
  }
  cout << endl;
  return 0;
}

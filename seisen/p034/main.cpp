// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> fib(n + 1);
  for (int i = 0; i <= n; i++) {
    if (i == 0 || i == 1) {
      fib[i] = 1;
    } else {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
  }
  cout << fib[n] << endl;
  return 0;
}

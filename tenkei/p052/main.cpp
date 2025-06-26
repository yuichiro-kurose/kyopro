// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  long long ans = 1;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < 6; j++) {
      int a;
      cin >> a;
      sum += a;
    }
    ans = (ans * sum) % mod;
  }
  cout << ans << endl;
  return 0;
}

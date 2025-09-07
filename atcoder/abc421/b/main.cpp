// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

long long f(int x) {
  string s = to_string(x);
  reverse(s.begin(), s.end());
  long long res = stoll(s);
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<long long> a(10);
  cin >> a[0] >> a[1];
  for (int i = 2; i < 10; i++) {
    a[i] = f(a[i - 1] + a[i - 2]);
  }
  cout << a[9] << endl;
  return 0;
}

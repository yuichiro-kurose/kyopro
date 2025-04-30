// author: Yuichiro Kurose

#include <bits/stdc++.h>
using namespace std;

long long f(int x) {
  string s = "";
  for (int i = 0; i < x; i++) {
    s += '1';
  }
  return stoll(s);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> a;
  for (int i = 1; i <= 12; i++) {
    for (int j = i; j <= 12; j++) {
      for (int k = j; k <= 12; k++) {
        a.push_back(f(i) + f(j) + f(k));
      }
    }
  }
  sort(a.begin(), a.end());
  cout << a[n - 1] << endl;
  return 0;
}
